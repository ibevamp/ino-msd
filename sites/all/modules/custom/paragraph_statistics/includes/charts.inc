<?php

class charts {
    public function paragraph_statistics_column_simple($title, array $data1, array $data2, array $labels) {
        $chart = array(
            '#type' => 'chart',
            '#chart_type' => 'column',
            '#title' => t($title),
        );

        $chart['pages'] = array(
            '#type' => 'chart_data',
            '#title' => t($data1['title']),
            '#data' => $data1['data'],
            '#suffix' => $data1['suffix'],
        );

        $chart['times'] = array(
            '#type' => 'chart_data',
            '#title' => t($data2['title']),
            '#data' => $data2['data'],
            '#suffix' => $data2['suffix'],
        );

        $chart['xaxis'] = array(
            '#type' => 'chart_xaxis',
            '#labels' => $labels,
        );

        $column_simple['chart'] = $chart;

        return $column_simple;
    }
}