<?php

/**
 * Admin settings page for vocabs
 */


function rc_quiz_admin_settings_form($form, &$form_state){

    $vocabulary = taxonomy_get_vocabularies();
    $checklist_vocab_array = array(); /* Change to array('0' => '--none--'); if you want a none option*/
    foreach ($vocabulary as $item) {
        $key = $item->vid;
        $value = $item->name;
        $checklist_vocab_array[$key] = $value;
    }
    $form['all_vocabs'] = array(
        '#type'             => 'checkboxes',
        '#title'            => t('List of current Vocabularies.'),
        '#position'         => 'left' ,
        '#options'          => $checklist_vocab_array,
        '#default_value'    => variable_get('all_vocabs'),
        '#description'      => t('List of vocabularies displayed as checkboxes'),
    );

    $form['view_reports'] = array(
        '#markup' => '<a href="'.base_path().'/prop/reports/">View Report Page</a>',
    );
    return system_settings_form($form);

}

function rc_quiz_admin_settings_form_submit($form, &$form_state){

    $testto = $form_state['input']['email_test_to'];
    $from = $form_state['input']['email_from'];
    $body = $form_state['input']['email_body'];
    $popup = $form_state['input']['rc_quiz_popup'];
    $title = $form_state['input']['rc_quiz_title'];

    $subject = $form_state['input']['email_subject'];
    $sidebar = $form_state['input']['sidebar_body'];
    variable_set('rc_quiz_email_test_to',$testto);
    variable_set('rc_quiz_email_from',$from);
    variable_set('rc_quiz_email_body', $body);
    variable_set('rc_quiz_email_suject', $subject);
    variable_set('rc_quiz_sidebar_body', $sidebar);
    variable_set('rc_quiz_popup_text', $popup);
    variable_set('rc_quiz_title_text', $title);

    drupal_set_message("Settings saved");
}

function rc_quiz_ajax_test_email($form_state){



    //send an email out to the user

    $to = variable_get("rc_quiz_email_test_to");
    $from = variable_get("rc_quiz_email_from");
    $subject = variable_get("rc_quiz_email_suject");
    $body = variable_get("rc_quiz_email_body");
    if($to){
        $sent = simple_mail_send($from, $to, $subject, $body);
        if($sent) {
            $commands[] = ajax_command_append("#email-results","SENT");
        } else {
            $commands[] = ajax_command_append("#email-results","Failed");
        }
    } else {
        $commands[] = ajax_command_append("#email-results","Type your email, save the configuration, then try again");
    }


    return array('#type' => 'ajax', '#commands' => $commands);
}