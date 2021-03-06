<?php

/**
 * @file
 * view hooks.
 */


/**
 * Implements hook_views_data()
 */
function userfollow_views_data() {

    // ϳ��������� �� ������ �������
    $data['user_follows']['table']['join']['node'] = array(
        'left_field' => 'uid',
        'field' => 'fid',
    );

    // ��������� ������ ��� ������� 
    $data['user_follows']['uid'] = array(
        'title' => t('Select content followed users'),
        'help' => t('Select all content that authored by particular user'),
        'group' => t('Node'),
        'filter' => array('handler' => 'userfollow_handler_filter_mycustomfilter'),
    );

    return $data;
}
