<?php

/**
 * @file
 * Implements filter hanler.
 */

/**
 * Implements filter hanler
 */
class userfollow_handler_filter_mycustomfilter extends views_handler_filter {

    function query() {
        global $user;
        $this->ensure_my_table();
        $this->query->add_where("user_follows", "user_follows.uid", $user->uid);
    }

}
