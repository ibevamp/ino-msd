<?php

class db {
	public function queryParaBundles() {
		$query = db_query('SELECT DISTINCT(pi.bundle) FROM paragraphs_item pi WHERE pi.archived = 0 ORDER BY pi.bundle ASC');
		$results = $query->fetchAll();

		$bundles = array();
		foreach($results as $result) {
			$bundles[$result->bundle] = $result->bundle;
		}

		return $bundles;
	}

	public function queryCountTimes($bundle) {
		$query = db_query('SELECT * FROM paragraphs_item pi WHERE pi.bundle = :bundle and pi.archived = 0', array(':bundle' => $bundle));
		$result = $query->fetchAll();

		return count($result);
	}

	public function queryPages($bundle) {
		$query = db_query('SELECT DISTINCT(pi.field_name) FROM paragraphs_item pi WHERE pi.archived = 0');
		$results = $query->fetchAll();

		$fields = array();
		foreach($results as $result) {
			$fields[] = $result->field_name;
		}

		$count = 0;
		$entity_ids = array();
		foreach($fields as $field) {
			$field_table = 'field_data_' . $field;
			$field_column = 'f.' . $field . '_value';
			$query_string = 'SELECT DISTINCT(f.entity_id) FROM paragraphs_item pi JOIN ' . $field_table . ' f ON pi.item_id = ' . $field_column . ' WHERE pi.bundle = :bundle and f.entity_type = :node';

			$query = db_query($query_string, array(':bundle' => $bundle, ':node' => 'node'));
			$results = $query->fetchAll();
			$entity_ids[] = $results;
			$count += count($results);
		}

		$return = array();
		$return['count'] = $count;
		$return['entity_ids'] = $entity_ids;

		return $return;
	}

	public function getTitleURLFromNID($nid) {
		$query = db_query('SELECT title FROM node WHERE nid = :nid', array(':nid' => $nid));
		$result = $query->fetchField();

		return $result;
	}
}