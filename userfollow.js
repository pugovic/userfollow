
/**
 * Add user to list
 * @param {number} uid - Current user.
 * @param {number} followsid - Id user for follow.
 */
function userfollow_add_user(uid, followsid) {
    userfollow_ajax('add', uid, followsid);
}

/**
 * Remove user from list
 * @param {number} uid - Current user.
 * @param {number} followsid - Id user for follow.
 */
function userfollow_remove_user(uid, followsid) {
    userfollow_ajax('remove', uid, followsid);
}

/**
 * Send ajax
 * @param {string} op - Type operation.
 * @param {number} userid - Current user.
 * @param {number} fuid - Id user for follow.
 */
function userfollow_ajax(op, userid, fuid) {
    var settings = {url: '/ajax/' + op + '/' + userid + '/' + fuid};
    var ajax = new Drupal.ajax(false, false, settings);
    ajax.eventResponse(ajax, {});
}
