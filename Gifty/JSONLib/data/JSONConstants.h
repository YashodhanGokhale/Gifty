#import <Foundation/Foundation.h>

#pragma mark - change to https
#define KHTTP @"https://"

static NSString * const GOT_FILESFOLDERS_FROM_SERVER_RESPONSE_SUCCESS = @"GotSearchFilesFoldersDetails";
static NSString * const GOT_FILESFOLDERS_FROM_SERVER_RESPONSE_FAILURE = @"GotSearchFilesFoldersDetailsWithError";

static NSString * const GOT_TASKS_FROM_SERVER_RESPONSE_SUCCESS = @"GOT_TASKS_FROM_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_TASKS_FROM_SERVER_RESPONSE_FAILURE = @"GOT_TASKS_FROM_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_POSTS_FROM_SERVER_RESPONSE_SUCCESS = @"GOT_POSTS_FROM_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_POSTS_FROM_SERVER_RESPONSE_FAILURE = @"GOT_POSTS_FROM_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_WIKIS_FROM_SERVER_RESPONSE_SUCCESS = @"GOT_WIKIS_FROM_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_WIKIS_FROM_SERVER_RESPONSE_FAILURE = @"GOT_WIKIS_FROM_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_LEAVE_TEAM_RESPONSE_SUCCESS = @"GOT_LEAVE_TEAM_RESPONSE_SUCCESS";
static NSString * const GOT_LEAVE_TEAM_RESPONSE_FAILURE = @"GOT_LEAVE_TEAM_RESPONSE_FAILURE";

static NSString * const GOT_JOIN_TEAM_RESPONSE_SUCCESS = @"GOT_JOIN_TEAM_RESPONSE_SUCCESS";
static NSString * const GOT_JOIN_TEAM_RESPONSE_FAILURE = @"GOT_JOIN_TEAM_RESPONSE_FAILURE";

static NSString * const GOT_ADD_COWORKER_IN_DM_RESPONSE_SUCCESS = @"GOT_INVITE_COWORKER_IN_DM_RESPONSE_SUCCESS";
static NSString * const GOT_ADD_COWORKER_IN_DM_RESPONSE_FAILURE = @"GOT_INVITE_COWORKER_IN_DM_RESPONSE_FAILURE";

static NSString * const GOT_FOLLOW_UN_FOLLOW_RESPONSE_SUCCESS = @"GOT_FOLLOW_UN_FOLLOW_RESPONSE_SUCCESS";
static NSString * const GOT_FOLLOW_UN_FOLLOW_RESPONSE_FAILURE = @"GOT_FOLLOW_UN_FOLLOW_RESPONSE_FAILURE";

static NSString * const GOT_GOOGLEMAP_RESPONSE_SUCCESS = @"GOT_GOOGLEMAP_RESPONSE_SUCCESS";
static NSString * const GOT_GOOGLEMAP_RESPONSE_FAILURE = @"GOT_GOOGLEMAP_RESPONSE_FAILURE";

static NSString * const GOT_WIKIS_RESPONSE_SUCCESS = @"GOT_WIKIS_RESPONSE_SUCCESS";
static NSString * const GOT_WIKIS_RESPONSE_FAILURE = @"GOT_WIKIS_RESPONSE_FAILURE";

static NSString * const GOT_COMPANY_NEWS_RESPONSE_SUCCESS = @"GOT_COMPANY_NEWS_RESPONSE_SUCCESS";
static NSString * const GOT_COMPANY_NEWS_RESPONSE_FAILURE = @"GOT_COMPANY_NEWS_RESPONSE_FAILURE";

static NSString * const GOT_SITE_LIST_RESPONSE_SUCCESS = @"GOT_SITE_LIST_RESPONSE_SUCCESS";
static NSString * const GOT_SITE_LIST_RESPONSE_FAILURE = @"GOT_SITE_LIST_RESPONSE_FAILURE";

static NSString * const GOT_LIKE_COMMENT_RESPONSE_SUCCESS = @"GOT_LIKE_COMMENT_RESPONSE_SUCCESS";
static NSString * const GOT_LIKE_COMMENT_RESPONSE_FAILURE = @"GOT_LIKE_COMMENT_RESPONSE_FAILURE";

static NSString * const GOT_SEND_IM_OVERHTTP_RESP = @"GOT_SEND_IM_OVERHTTP_RESP";
static NSString * const GOT_SEND_IM_OVERHTTP_RESP_FAILURE = @"GOT_SEND_IM_OVERHTTP_RESP_FAILURE";

static NSString * const GOT_SEND_ACK_OVERHTTP_RESP = @"GOT_SEND_ACK_OVERHTTP_RESP";
static NSString * const GOT_SEND_ACK_OVERHTTP_RESP_FAILURE = @"GOT_SEND_ACK_OVERHTTP_RESP_FAILURE";

static NSString * const GOT_CUSTOM_PRESENCE_CHANGE_OVERHTTP_RESP = @"GOT_CUSTOM_PRESENCE_CHANGE_OVERHTTP_RESP";
static NSString * const GOT_CUSTOM_PRESENCE_CHANGE_OVERHTTP_RESP_FAILURE = @"GOT_CUSTOM_PRESENCE_CHANGE_OVERHTTP_RESP_FAILURE";

static NSString * const GOT_SUB_OVERHTTP_RESP = @"GOT_SUB_OVERHTTP_RESP";
static NSString * const GOT_SUB_OVERHTTP_RESP_FAILURE = @"GOT_SUB_OVERHTTP_RESP_FAILURE";

static NSString * const GOT_UNSUB_OVERHTTP_RESP = @"GOT_UNSUB_OVERHTTP_RESP";
static NSString * const GOT_UNSUB_OVERHTTP_RESP_FAILURE = @"GOT_UNSUB_OVERHTTP_RESP_FAILURE";

static NSString * const GOT_POLLFOR_ACK_RESP = @"GOT_POLLFOR_ACK_RESP";
static NSString * const GOT_POLLFOR_ACK_RESP_FAILURE = @"GOT_POLLFOR_ACK_RESP_FAILURE";

static NSString * const GOT_TYPING_INDICATOR_RESP = @"GOT_TYPING_INDICATOR_RESP";
static NSString * const GOT_TYPING_INDICATOR_RESP_FAILURE = @"GOT_TYPING_INDICATOR_RESP_FAILURE";

static NSString * const GOT_FEED_LIKE_RESPONSE_SUCCESS = @"GOT_FEED_LIKE_RESPONSE_SUCCESS";
static NSString * const GOT_FEED_LIKE_RESPONSE_FAILURE = @"GOT_FEED_LIKE_RESPONSE_FAILURE";

static NSString * const GOT_FEED_LIKE_LIST_RESPONSE_SUCCESS = @"GOT_FEED_LIKE_LIST_RESPONSE_SUCCESS";
static NSString * const GOT_FEED_LIKE_LIST_RESPONSE_FAILURE = @"GOT_FEED_LIKE_LIST_RESPONSE_FAILURE";

static NSString * const GOT_COMMENT_LIKE_LIST_RESPONSE_SUCCESS = @"GOT_COMMENT_LIKE_LIST_RESPONSE_SUCCESS";
static NSString * const GOT_COMMENT_LIKE_LIST_RESPONSE_FAILURE = @"GOT_COMMENT_LIKE_LIST_RESPONSE_FAILURE";

static NSString * const GOT_MY_FOLLOWERS_LIST_RESPONSE_SUCCESS = @"GOT_MY_FOLLOWERS_LIST_RESPONSE_SUCCESS";
static NSString * const GOT_MY_FOLLOWERS_LIST_RESPONSE_FAILURE = @"GOT_MY_FOLLOWERS_LIST_RESPONSE_FAILURE";

static NSString * const VIEW_TEAM_MEMBERS_LIST_RESPONSE_SUCCESS = @"VIEW_TEAM_MEMBERS_LIST_RESPONSE_SUCCESS";
static NSString * const VIEW_TEAM_MEMBERS_LIST_RESPONSE_FAILURE = @"VIEW_TEAM_MEMBERS_LIST_RESPONSE_FAILURE";

static NSString * const GOT_POST_IDEA_RESPONSE_SUCCESS = @"GOT_POST_IDEA_RESPONSE_SUCCESS";
static NSString * const GOT_POST_IDEA_RESPONSE_FAILURE = @"GOT_POST_IDEA_RESPONSE_FAILURE";

static NSString * const GOT_MY_TASKS_RESPONSE_SUCCESS = @"GOT_MY_TASKS_RESPONSE_SUCCESS";
static NSString * const GOT_MY_TASKS_RESPONSE_FAILURE = @"GOT_MY_TASKS_RESPONSE_FAILURE";

static NSString * const GOT_MY_PROJECT_TASKS_RESPONSE_SUCCESS = @"GOT_MY_PROJECT_TASKS_RESPONSE_SUCCESS";
static NSString * const GOT_MY_PROJECT_TASKS_RESPONSE_FAILURE = @"GOT_MY_PROJECT_TASKS_RESPONSE_FAILURE";

static NSString * const GOT_MY_DELEGATED_TASKS_RESPONSE_SUCCESS = @"GOT_MY_DELEGATED_TASKS_RESPONSE_SUCCESS";
static NSString * const GOT_MY_DELEGATED_TASKS_RESPONSE_FAILURE = @"GOT_MY_DELEGATED_TASKS_RESPONSE_FAILURE";

static NSString * const GOT_DELETE_TASKS_RESPONSE_SUCCESS = @"GOT_DELETE_TASKS_RESPONSE_SUCCESS";
static NSString * const GOT_DELETE_TASKS_RESPONSE_FAILURE = @"GOT_DELETE_TASKS_RESPONSE_FAILURE";

static NSString * const GOT_ADD_TASK_RESPONSE_SUCCESS = @"GOT_ADD_TASK_RESPONSE_SUCCESS";
static NSString * const GOT_ADD_TASK_RESPONSE_FAILURE = @"GOT_ADD_TASK_RESPONSE_FAILURE";

static NSString * const GOT_EDIT_TASK_RESPONSE_SUCCESS = @"GOT_EDIT_TASK_RESPONSE_SUCCESS";
static NSString * const GOT_EDIT_TASK_RESPONSE_FAILURE = @"GOT_EDIT_TASK_RESPONSE_FAILURE";

static NSString * const GOT_RSVP_RESPONSE_SUCCESS = @"GOT_RSVP_RESPONSE_SUCCESS";
static NSString * const GOT_RSVP_RESPONSE_FAILURE = @"GOT_RSVP_RESPONSE_FAILURE";

static NSString * const GOT_NEXT_TASK_ACTION_RESPONSE_SUCCESS = @"GOT_NEXT_TASK_ACTION_RESPONSE_SUCCESS";
static NSString * const GOT_NEXT_TASK_ACTION_RESPONSE_FAILURE = @"GOT_NEXT_TASK_ACTION_RESPONSE_FAILURE";

static NSString * const GOT_TASK_DETAIL_RESPONSE_SUCCESS = @"GOT_TASK_DETAIL_RESPONSE_SUCCESS";
static NSString * const GOT_TASK_DETAIL_RESPONSE_FAILURE = @"GOT_TASK_DETAIL_RESPONSE_FAILURE";

static NSString * const GOT_TASK_ACTIVITY_RESPONSE_SUCCESS = @"GOT_TASK_ACTIVITY_RESPONSE_SUCCESS";
static NSString * const GOT_TASK_ACTIVITY_RESPONSE_FAILURE = @"GOT_TASK_ACTIVITY_RESPONSE_FAILURE";

static NSString * const GOT_TASK_REORDER_RESPONSE_SUCCESS = @"GOT_TASK_REORDER_RESPONSE_SUCCESS";
static NSString * const GOT_TASK_REORDER_RESPONSE_FAILURE = @"GOT_TASK_REORDER_RESPONSE_FAILURE";
static NSString*  const GOT_SAVE_APNS_SETTINGS_RESPONSE_SUCCESS  = @"GOT_SAVE_APNS_SETTINGS_RESPONSE_SUCCESS";
static NSString*  const GOT_SAVE_APNS_SETTINGS_RESPONSE_FAILURE =  @"GOT_SAVE_APNS_SETTINGS_RESPONSE_FAILURE";

static NSString* const GOT_APNS_SETTINGS_RESPONSE_SUCCESS = @"GOT_APNS_SETTINGS_RESPONSE_SUCCESS";
static NSString* const GOT_APNS_SETTINGS_RESPONSE_FAILURE = @"GOT_APNS_SETTINGS_RESPONSE_FAILURE";

static NSString* const GOT_INVITE_COLLEAGUE_RESPONSE_SUCCESS = @"GOT_INVITE_COLLEAGUE_RESPONSE_SUCCESS";
static NSString* const GOT_INVITE_COLLEAGUE_RESPONSE_FAILURE = @"GOT_INVITE_COLLEAGUE_RESPONSE_FAILURE";

static NSString* const GOT_DOMAIN_SETTINGS_RESPONSE_SUCCESS = @"GOT_DOMAIN_SETTINGS_RESPONSE_SUCCESS";
static NSString* const GOT_DOMAIN_SETTINGS_RESPONSE_FAILURE = @"GOT_DOMAIN_SETTINGS_RESPONSE_FAILURE";

static NSString * const GOT_FEED_LIST_RESPONSE_SUCCESS = @"GOT_FEED_LIST_RESPONSE_SUCCESS";
static NSString * const GOT_FEED_LIST_RESPONSE_FAILURE = @"GOT_FEED_LIST_RESPONSE_FAILURE";

static NSString * const GOT_FEED_COMMENTS_LIST_RESPONSE_SUCCESS = @"GOT_FEED_COMMENTS_LIST_RESPONSE_SUCCESS";
static NSString * const GOT_FEED_COMMENTS_LIST_RESPONSE_FAILURE = @"GOT_FEED_COMMENTS_LIST_RESPONSE_FAILURE";

static NSString * const GOT_WALL_FEEDS_LIST_RESPONSE_SUCCESS = @"GOT_WALL_FEEDS_LIST_RESPONSE_SUCCESS";
static NSString * const GOT_WALL_FEEDS_LIST_RESPONSE_FAILURE = @"GOT_WALL_FEEDS_LIST_RESPONSE_FAILURE";

static NSString * const GOT_TEAM_WALL_FEEDS_LIST_RESPONSE_SUCCESS = @"GOT_TEAM_WALL_FEEDS_LIST_RESPONSE_SUCCESS";
static NSString * const GOT_TEAM_WALL_FEEDS_LIST_RESPONSE_FAILURE = @"GOT_TEAM_WALL_FEEDS_LIST_RESPONSE_FAILURE";

static NSString * const GOT_FEED_DETAILS_RESPONSE_SUCCESS = @"GOT_FEED_DETAILS_RESPONSE_SUCCESS";
static NSString * const GOT_FEED_DETAILS_RESPONSE_FAILURE = @"GOT_FEED_DETAILS_RESPONSE_FAILURE";

static NSString * const GOT_DOCACTIVITY_FEEDS_LIST_RESPONSE_SUCCESS = @"GOT_DOCACTIVITY_FEEDS_LIST_RESPONSE_SUCCESS";
static NSString * const GOT_DOCACTIVITY_FEEDS_LIST_RESPONSE_FAILURE = @"GOT_DOCACTIVITYL_FEEDS_LIST_RESPONSE_FAILURE";

static NSString * const GOT_NOTIFICATIONS_RESPONSE_SUCCESS = @"GOT_NOTIFICATIONS_RESPONSE_SUCCESS";
static NSString * const GOT_NOTIFICATIONS_RESPONSE_FAILURE = @"GOT_NOTIFICATIONS_RESPONSE_FAILURE";

static NSString * const GOT_DOMAIN_USER_DETAILS_RESPONSE_SUCCESS = @"GOT_DOMAIN_USER_DETAILS_RESPONSE_SUCCESS";
static NSString * const GOT_DOMAIN_USER_DETAILS_RESPONSE_FAILURE = @"GOT_DOMAIN_USER_DETAILS_RESPONSE_FAILURE";

static NSString * const GOT_CONVERSATION_DETAILS_RESPONSE_SUCCESS = @"GOT_CONVERSATION_DETAILS_RESPONSE_SUCCESS";
static NSString * const GOT_CONVERSATION_DETAILS_RESPONSE_FAILURE = @"GOT_CONVERSATION_DETAILS_RESPONSE_FAILURE";

static NSString * const GOT_FEED_PINUNPIN_RESPONSE_SUCCESS = @"GOT_FEED_PINUNPIN_RESPONSE_SUCCESS";
static NSString * const GOT_FEED_PINUNPIN_RESPONSE_FAILURE = @"GOT_FEED_PINUNPIN_RESPONSE_FAILURE";

static NSString * const GOT_CHAT_HISTORY_RESPONSE_SUCCESS = @"GOT_CHAT_HISTORY_SUCCESS";
static NSString * const GOT_CHAT_HISTORY_RESPONSE_FAILURE = @"GOT_CHAT_HISTORY_FAILURE";

static NSString * const GOT_COLLEAGUEPRESENCE_RESPONSE_SUCCESS = @"GOT_COLLEAGUEPRESENCE_RESPONSE_SUCCESS";
static NSString * const GOT_COLLEAGUEPRESENCE_RESPONSE_FAILURE = @"GOT_COLLEAGUEPRESENCE_RESPONSE_FAILURE";

static NSString * const GOT_LOGIN_RESPONSE_SUCCESS = @"GOT_LOGIN_RESPONSE_SUCCESS";
static NSString * const GOT_LOGIN_RESPONSE_FAILURE = @"GOT_LOGIN_RESPONSE_FAILURE";

static NSString * const GOT_LOGOUT_RESPONSE_SUCCESS = @"GOT_LOGOUT_RESPONSE_SUCCES";
static NSString * const GOT_LOGOUT_RESPONSE_FAILURE = @"GOT_LOGOUT_RESPONSE_FAILURE";

static NSString * const GOT_POST_LOGIN_RESPONSE_SUCCESS = @"GOT_POST_LOGIN_RESPONSE_SUCCESS";
static NSString * const GOT_POST_LOGIN_RESPONSE_FAILURE = @"GOT_POST_LOGIN_RESPONSE_FAILURE";

static NSString * const GOT_SIGN_UP_RESPONSE_SUCCESS = @"GOT_SIGN_UP_RESPONSE_SUCCESS";
static NSString * const GOT_SIGN_UP_RESPONSE_FAILURE =  @"GOT_SIGN_UP_RESPONSE_FAILURE";

static NSString * const GOT_RESET_PWD_RESPONSE_SUCCESS = @"GOT_RESET_PWD_RESPONSE_SUCCESS";
static NSString * const GOT_RESET_PWD_RESPONSE_FAILURE = @"GOT_RESET_PWD_RESPONSE_FAILURE";

static NSString * const GOT_DOMAIN_USERS_RESPONSE_SUCCESS = @"GOT_DOMAIN_USERS_RESPONSE_SUCCESS";
static NSString * const GOT_DOMAIN_USERS_RESPONSE_FAILURE = @"GOT_DOMAIN_USERS_RESPONSE_FAILURE";

static NSString * const GOT_CHATS_RESPONSE_SUCCESS = @"GOT_CHATS_RESPONSE_SUCCESS";
static NSString * const GOT_CHATS_RESPONSE_FAILURE = @"GOT_CHATS_RESPONSE_FAILURE";

static NSString * const GOT_ONLINE_COLLEAGUES_SUCCESS = @"GOT_ONLINE_COLLEAGUES_SUCCESS";
static NSString * const GOT_ONLINE_COLLEAGUES_FAILURE = @"GOT_ONLINE_COLLEAGUES_FAILURE";

static NSString * const GOT_TEAM_LIST_SUCCESS = @"GOT_TEAM_LIST_SUCCESS";
static NSString * const GOT_TEAM_LIST_FAILURE = @"GOT_TEAM_LIST_FAILURE";

static NSString *  const GOT_START_CONVERSATION_SUCCESS = @"GOT_START_CONVERSATION_SUCCESS";
static NSString *  const GOT_START_CONVERSATION_FAILURE = @"GOT_START_CONVERSATION_FAILURE";

static NSString * const GOT_INBOX_RESPONSE_AFTER_LOGIN_SUCCESS = @"INBOX_RESPONSE_AFTER_LOGIN_SUCCESS";
static NSString * const GOT_INBOX_MANNUAL_RESPONE_SUCCESS = @"INBOX_MANNUAL_RESPONE_SUCCESS";
static NSString * const GOT_INBOX_FETCHOLDER_RESPONE_SUCCESS = @"INBOX_FETCHOLDER_RESPONE_SUCCESS";

static NSString * const GOT_INBOX_RESPONSE_AFTER_LOGIN_FAILURE = @"INBOX_RESPONSE_AFTER_LOGIN_FAILURE";
static NSString * const GOT_INBOX_MANNUAL_RESPONE_FAILURE = @"INBOX_MANNUAL_RESPONE_FAILURE";
static NSString * const GOT_INBOX_FETCHOLDER_RESPONE_FAILURE = @"INBOX_FETCHOLDER_RESPONE_FAILURE";

static NSString * const GOT_FETCH_OLDER_UNREAD_SUCCESS = @"FETCH_OLDER_UNREAD_SUCCESS";
static NSString * const GOT_FETCH_OLDER_UNREAD_FAILURE = @"FETCH_OLDER_UNREAD_FAILURE";

static NSString * const GOT_UNREAD_INBOX_RESPONSE_SUCCESS = @"UNREAD_INBOX_RESPONSE_SUCCESS";
static NSString * const GOT_UNREAD_INBOX_RESPONSE_FAILURE = @"UNREAD_INBOX_RESPONSE_FAILURE";

static NSString * const GOT_RENAME_GROUP_SUCCESS = @"RENAME_GROUP_SUCCESS";
static NSString * const GOT_RENAME_GROUP_FAILURE = @"RENAME_GROUP_FAILURE";

static NSString * const GOT_GROUP_MEMBER_RESPONSE_SUCCESS = @"GROUP_MEMBER_RESPONSE_SUCCESS ";
static NSString * const GOT_GROUP_MEMBER_RESPONSE_FAILURE = @"GROUP_MEMBER_RESPONSE_FAILURE";

static NSString * const GOT_TEAMS_COLLEAGUES_RESPONSE_SUCCESS = @"GOT_TEAMS_COLLEAGUES_RESPONSE_SUCCESS";
static NSString * const GOT_TEAMS_COLLEAGUES_RESPONSE_FAILURE = @"GOT_TEAMS_COLLEAGUES_RESPONSE_FAILURE";

static NSString * const GOT_LEAVE_CONVERSATION_RESPONSE_SUCCESS = @"LEAVE_CONVERSATION_RESPONSE_SUCCESS";
static NSString * const GOT_LEAVE_CONVERSATION_RESPONSE_FAILURE = @"LEAVE_CONVERSATION_RESPONSE_FAILURE";

static NSString * const GOT_ADDREMOVE_GROUP_MEMBER_RESPONSE_SUCCESS = @"ADDREMOVE_GROUP_MEMBER_RESPONSE";
static NSString * const GOT_ADDREMOVE_GROUP_MEMBER_RESPONSE_FAILURE = @"ADDREMOVE_GROUP_MEMBER_RESPONSE_FAILURE";

static NSString * const GOT_FORGOT_PASSWORD_RESPONSE_SUCCESS = @"FORGOT_PASSWORD_RESPONSE_SUCCESS";
static NSString * const GOT_FORGOT_PASSWORD_RESPONSE_FAILURE = @"FORGOT_PASSWORD_RESPONSE_FAILURE";

static  NSString* const GOT_VIDEO_THUMB_RESPONSE_SUCCESS =  @"GOT_VIDEO_THUMB_RESPONSE_SUCCESS";
static  NSString* const GOT_VIDEO_THUMB_RESPONSE_FAILURE = @"GOT_VIDEO_THUMB_RESPONSE_FAILURE";

static NSString * const GOT_EDIT_PROFILE_RESPONSE_SUCCESS = @"EDIT_PROFILE_RESPONSE_SUCCESS";
static NSString * const GOT_EDIT_PROFILE_RESPONSE_FAILURE = @"EDIT_PROFILE_RESPONSE_FAILURE";

static NSString * const GOT_CHANGE_GROUP_SETTINGS_RESPONSE_SUCCESS = @"GOT_CHANGE_GROUP_SETTINGS_RESPONSE_SUCCESS";
static NSString * const GOT_CHANGE_GROUP_SETTINGS_RESPONSE_FAILURE = @"GOT_CHANGE_GROUP_SETTINGS_RESPONSE_FAILURE";

static NSString * const GOT_GROUP_SETTINGS_RESPONSE_SUCCESS = @"GOT_GROUP_SETTINGS_RESPONSE_SUCCESS";
static NSString * const GOT_GROUP_SETTINGS_RESPONSE_FAILURE = @"GOT_GROUP_SETTINGS_RESPONSE_FAILURE";

static NSString * const GOT_MA_TEAM_SUCCESS = @"GOT_MA_TEAM_SUCCESS";
static NSString * const GOT_MA_TEAM_FAILURE = @"GOT_MA_TEAM_FAILURE";

static NSString * const GOT_ADMIN_ACTION_RESPONSE_SUCCESS = @"ADMIN_ACTION_RESPONSE_SUCCESS";
static NSString * const GOT_ADMIN_ACTION_RESPONSE_FAILURE = @"ADMIN_ACTION_RESPONSE_FAILURE";

static NSString * const GOT_CONVERSATION_DELETE_RESPONSE_SUCCESS = @"CONVERSATION_DELETE_RESPONSE_SUCCESS";
static NSString * const GOT_CONVERSATION_DELETE_RESPONSE_FAILURE = @"CONVERSATION_DELETE_RESPONSE_FAILURE";

static NSString * const GOT_MESSAGE_DELETE_RESPONSE_SUCCESS = @"MESSAGE_DELETE_RESPONSE_SUCCESS";
static NSString * const GOT_MESSAGE_DELETE_RESPONSE_FAILURE = @"MESSAGE_DELETE_RESPONSE_FAILURE";

static NSString * const GOT_ACKNOWLEDGE_RESPONSE_SUCCESS = @"ACKNOWLEDGE_RESPONSE_SUCCESS";
static NSString * const GOT_ACKNOWLEDGE_RESPONSE_FAILURE = @"ACKNOWLEDGE_RESPONSE_FAILURE";

static NSString * const GOT_ACKNOWLEDGE_REPORT_SUCCESS = @"ACKNOWLEDGE_REPORT_SUCCESS";
static NSString * const GOT_ACKNOWLEDGE_REPORT_FAILURE = @"ACKNOWLEDGE_REPORT_FAILURE";

static NSString * const GOT_WRITE_ON_WALL_RESPONSE_SUCCESS = @"WRITE_ON_WALL_RESPONSE_SUCCESS";
static NSString * const GOT_WRITE_ON_WALL_RESPONSE_FAILURE = @"WRITE_ON_WALL_RESPONSE_FAILURE";

static NSString * const GOT_WRITE_COMMENT_RESPONSE_SUCCESS = @"WRITE_COMMENT_RESPONSE_SUCCESS";
static NSString * const GOT_WRITE_COMMENT_RESPONSE_FAILURE = @"WRITE_WRITE_RESPONSE_FAILURE";

static NSString * const GOT_MARK_FEED_AS_READ_RESPONSE_SUCCESS = @"GOT_MARK_FEED_AS_READ_RESPONSE_SUCCESS";
static NSString * const GOT_MARK_FEED_AS_READ_RESPONSE_FAILURE = @"GOT_MARK_FEED_AS_READ_RESPONSE_FAILURE";

static NSString * const GOT_EDIT_COMMENT_RESPONSE_SUCCESS = @"GOT_EDIT_COMMENT_RESPONSE_SUCCESS";
static NSString * const GOT_EDIT_COMMENT_RESPONSE_FAILURE = @"GOT_EDIT_COMMENT_RESPONSE_FAILURE";

static NSString * const GOT_EDIT_FEED_RESPONSE_SUCCESS = @"GOT_EDIT_FEED_RESPONSE_SUCCESS";
static NSString * const GOT_EDIT_FEED_RESPONSE_FAILURE = @"GOT_EDIT_FEED_RESPONSE_FAILURE";

static NSString * const GOT_UPLOAD_FEED_IMAGE_RESPONSE_SUCCESS = @"GOT_UPLOAD_FEED_IMAGE_RESPONSE_SUCCESS";
static NSString * const GOT_UPLOAD_FEED_IMAGE_RESPONSE_FAILURE = @"GOT_UPLOAD_FEED_IMAGE_RESPONSE_FAILURE";

static NSString * GOT_MUTE_CONVERSTION_RESPONSE_SUCCESS = @"MUTE_CONVERSTION_RESPONSE_SUCCESS";
static NSString * GOT_MUTE_CONVERSTION_RESPONSE_FAILURE = @"MUTE_CONVERSTION_RESPONSE_FAILURE";

static NSString * GOT_UNMUTE_CONVERSTION_RESPONSE_SUCCESS = @"UNMUTE_CONVERSTION_RESPONSE_SUCCESS";
static NSString * GOT_UNMUTE_CONVERSTION_RESPONSE_FAILURE = @"UNMUTE_CONVERSTION_RESPONSE_FAILURE";

static NSString * const GOT_SIGN_UP_UI_RESPONSE_SUCCESS = @"GOT_SIGN_UP_UI_RESPONSE_SUCCESS";
static NSString * const GOT_SIGN_UP_UI_RESPONSE_FAILURE =  @"GOT_SIGN_UP_UI_RESPONSE_FAILURE";

static NSString * const TRANSACTION_ID = @"transaction_id";
static NSString * const VALUE = @"VALUE";
static NSString * const NAME = @"name";
static NSString * const ID = @"id";
static NSString * const PHOTO_URL = @"photo";
static NSString * const EMAIL = @"email";
static NSString * const MS_RESPONSE = @"ms_response";
static NSString * const MS_SUCESS_RESPONSE = @"ms_success";
static NSString * const MS_ERR = @"ms_errors";
static NSString * const MS_REQUEST = @"ms_request";
static NSString * const ADMIN = @"admin";
static NSString * const MEMBERS =@"members";
static NSString * const SUCCESS = @"success";
static NSString * const TASK_DELETE_SUCCESS = @"Success";
static NSString * const ACCESS = @"access";
static NSString * const KPHONE = @"phone";
static NSString * const KMOBILE = @"mobile";
static NSString * const STATUS_UPDATED_AT = @"status_updated_at";
static NSString * const ACK_STATUS = @"ackStatus";

static NSString * const CREATED_AT =@"created_at";
static NSString* const MY_TEAM = @"my_team";
static NSString* const CONV_TYPE = @"conv_type";
static NSString* const CONV_SUB_TYPE = @"conv_sub_type";
static NSString* const IS_GUEST_USER_MODULE_ENABLED = @"is_guest_module_enabled";
static NSString* const IS_TASK_MODULE_ENABLED = @"is_task_module_enabled";
static NSString* const IS_FILE_MODULE_ENABLED =  @"is_file_module_enabled";
static NSString* const VIRTUAL_FOLDER_ID = @"virtual_folder_id";
static NSString* const HAS_GUEST_USERS = @"has_guest_users";
static NSString* const CONVCREATORNAME = @"admin";
static NSString* const CONVCREATORID = @"id";
static NSString* const IS_PAGE_MODULE_ENABLED =  @"is_page_module_enabled";
static NSString* const IS_VIEW_MEMEBERS_ENABLED_FOR_GUEST = @"enable_view_members_for_guests" ;
static NSString* const IS_CHAT_ENABLED_FOR_GUEST = @"enable_chat_for_guests" ;
static NSString* const IS_READ_ONLY_ACCESS_FOR_GUEST = @"enable_read_only_for_guests" ;
static NSString* const IS_CREATE_TASK_ACCESS_FOR_GUEST =@"enable_guest_to_create_task" ;
static NSString* const IS_WIKI_MODULE_ENABLED = @"is_wiki_module_enabled" ;
static NSString* const IS_POST_MODULE_ENABLED = @"is_post_module_enabled" ;
static NSString* const IS_WALL_MODULE_ENABLED = @"is_wall_module_enabled" ;
static NSString* const IS_MEMBER_MODULE_ENABLED = @"is_members_module_enabled" ;
static NSString* const PAGE_LABEL = @"page_label" ;


static NSString* const HAS_GUEST_USER = @"has_guest_users";
static NSString * const DOB = @"dob";
static NSString * const PRESENCE_OPTION_ID = @"presence_option_id";
static NSString * const PRESENCE_STRING = @"presence_string";
static NSString * const IS_GROUP = @"is_group";
static NSString * const PRIVACY = @"privacy";
static NSString * const MODULE_PREFERENCES = @"module_preferences";
static NSString * const LANDING_PAGE = @"landing_page";
static NSString * const STATE = @"state";
static NSString * const IS_OUT_OF_NETWORK  = @"is_oon";
static NSString * const  MEMBAR_COUNT = @"member_count";
static NSString * const CONVERSATION_ID =@"conversationId";
static NSString * const K1CONVERSATION_ID = @"conversation_id";
static NSString* const KIS_FOLLOWING = @"is_following";
static NSString * const MEMBERS_DICT = @"members";
static NSString* const UPLOAD_ACCESS = @"upload_access";
static NSString* const ALLOW_MEMBERS_TO_INVITE = @"allow_members_to_invite";
static NSString * const ERRORS = @"errors";
static NSString * const ERROR = @"error";
static NSString * const ERROR_MESSAGE = @"message";
static NSString * const LEVEL_BADGES = @"level_badges" ;
static NSString * const CURRENT_LEVEL = @"current_level" ;
static NSString * const CURRENT_POINTS = @"current_points" ;
static NSString * const TOTAL_POINTS = @"total_points" ;
static NSString * const POINTS_TO_CLEAR_NEXT_LEVEL = @"points_to_clear_next_level" ;
static NSString * const LAST_LEVEL = @"last_level";
static NSString * const BADGES = @"badges" ;
static NSString * const BADGE = @"badge" ;
static NSString * const BADGE_NAME = @"name" ;
static NSString * const BADGE_HINT = @"hint" ;
static NSString * const BADGE_CREATED_AT = @"created_at" ;
static NSString * const BADGE_IMAGE_URL = @"image_url" ;
static NSString* const BADGE_CURRENT_LEVEL_IMG_URL = @"current_level_img";
static NSString* const ERROR_DOMAIN = @"Error Domain=";
static NSString* const ERROR_CODE = @"Code=";
static NSString* const ERR_WIPEOUT = @"WIPEOUT_DEVICE";
static NSString* const ERR_DISABLED = @"DEVICE_DISABLED";

static NSString* const WIPE_OUT_PENDING = @"WP";
static NSString* const DISABLE = @"D";
static NSString* const WIPE_OUT = @"WO";

/***** TASK CONSTANTS *****/

static NSString* const TASKS = @"tasks";
static NSString* const TASK = @"task";
static NSString* const TASK_ACTIVITY_FEED = @"feed";

static NSString* const TASK_ID = @"task_id";
static NSString* const TASK_ACCEPTED_ON = @"accepted_on";
static NSString* const TASK_ASSIGNED_ON = @"assigned_on";
static NSString* const TASK_ASSIGNED_TO = @"assigned_to";

static NSString* const BEST_CASE_VALUE = @"best_case";
static NSString* const BEST_CASE_UNIT = @"best_case_unit";
static NSString* const WORST_CASE_VALUE = @"worst_case";
static NSString* const WORST_CASE_UNIT = @"worst_case_unit";

static NSString* const TASK_BUCKET = @"bucket";
static NSString* const BUCKET_CURRENT = @"Current";
static NSString* const BUCKET_BACKLOG = @"Backlog";
static NSString* const BUCKET_ICEBOX = @"Icebox";
static NSString* const BUCKET_COMPLETE = @"Done";

static NSString* const CREATOR_ID = @"creator_id";
static NSString* const DELIVERED_ON = @"delivered_on";

static NSString* const DOCUMENT_POSTION = @"document_position";
static NSString* const DOCUMENT_PRIORITY = @"document_priority";

static NSString* const TASK_NAME = @"name";
static NSString* const TASK_NOTES = @"notes";
static NSString* const TASK_DUE = @"due";
static NSString* const TASK_DUE_ON_DATE = @"due_on";
static NSString* const TASK_FINISHED_ON = @"finished_on";
static NSString* const TASK_STATUS = @"status";
static NSString* const TASK_TYPE = @"type";

static NSString* const IS_MILESTONE = @"milestone";
static NSString* const MILESTONE_POSITION =@"milestone_position";
static NSString* const MILESTONE_PRIORITY = @"milestone_priority";

static NSString* const PERSONAL_PRIORITY = @"personal_priority";
static NSString* const PROFILE_POSTITION = @"profile_position";

static NSString* const QUESTION_CONVERSATION_ID = @"conversation_id";
static NSString* const PROJECT_ID = @"project_id";
static NSString* const PROJECT_POSITION = @"project_position";
static NSString* const PROJECT_PRIORITY = @"project_priority";
static NSString* const PRIORITY = @"priority";
static NSString* const SEQUENCE = @"sequence";
static NSString* const TASK_PRIORITY_PRIVATE = @"private";
static NSString* const TASK_PRIORITY_PUBLIC = @"public";
static NSString* const REASSIGNED_ON = @"reassigned_on";
static NSString* const REJECTED_ON = @"rejected_on";
static NSString* const REOPENED_ON = @"reopened_on";
static NSString* const RESTARTED_ON = @"restarted_on";
static NSString* const START_ON = @"start_on";
static NSString* const STARTED_ON = @"started_on";

static NSString* const Id = @"id";
static NSString* const FILE_NAME = @"filename";
static NSString* const CAN_SAVE = @"can_save";
static NSString* const FILTER = @"filter";
static NSString* const UPLOADER_NAME = @"uploader_name";
static NSString* const PRIVACY_TYPE = @"privacy_type";
static NSString* const VERSION_NUMBER = @"version_number";
static NSString* const UI_VERSION_NUMBER = @"ui_version_number";
static NSString* const FOLLOWERS_COUNT = @"followers_count";
static NSString* const CHECKED_OUT_AT = @"checked_out_at";
static NSString* const IS_FOLDER = @"is_folder";
static NSString* const RELATIVE_PATH = @"relative_path";
static NSString* const SHOW_IN_UPLOAD = @"show_in_upload";
static NSString* const SHOW_PERMISSON_OPTIONS = @"show_permission_options";
static NSString* const SHOW_APPLY_PARENT_OPTION = @"show_apply_parent_option";
static NSString* const FOLDER_REL = @"folder_rel";
static NSString* const CHILD_COUNT = @"child_count";
static NSString* const FOLDER_ID = @"folder_id";
static NSString* const TOTAL_COUNT = @"total_count";
static NSString* const DOC_TYPE = @"doc_type";

static NSString* const UPDATED_AT = @"updated_at";
static NSString* const VISIBILITY = @"visibility";
static NSString* const FEED_PIN = @"pin";
static NSString* const SUB_TASK = @"sub_tasks";

static NSString* const REVIEWERS = @"reviewers";
static NSString* const REVIEWER = @"reviewer";
static NSString* const REVIEWER_USER_ID = @"user_id";
static NSString* const REVIEWER_ON = @"reviewer_on";
static NSString* const REVIEWER_STATUS = @"status";

static NSString* const NEXT_TASK_ACTION = @"next_actions";
static NSString* const TASK_ACTION = @"action";

static NSString* const FEED_ID = @"from_feed_id";
static NSString* const UNSPECIFIED = @"unspecified";
static NSString* const OVERDUE = @"overdue";
static NSString* const TODAY = @"today";
static NSString* const TOMORROW = @"tomorrow";
static NSString* const THIS_WEEK = @"thisWeek";
static NSString* const SOON = @"soon";
static NSString* const ON_DATE = @"ondate";

static NSString* const TASK_NOT_DEFINED = @"unspecified";
static NSString* TASK_FEATURE = @"Feature";
static NSString* TASK_DEFECT = @"Defect";
static NSString* TASK_DOCUMENT = @"Documentation";
static NSString* TASK_CHOR = @"Chore";
static NSString* TASK_OTHER = @"Enhancement";

static NSString* const RSVP = @"rsvp";
static NSString* const NOTE = @"note";
static NSString* const EVENT = @"event";
static NSString* const USER_ID = @"user_id";
static NSString* const TASK_COMMENT = @"comment";
static NSString* const K_SUCCESS_KEY =  @"Success";
static NSString* const ADMIN_ACTION_TYPE = @"Admin_Action_Type";


/***** FEED CONSTANTS  *****/

static NSString* const FEED = @"feed";
static NSString* const FEED_BODY = @"body";
static NSString* const LIKE_COUNT = @"like_count";
static NSString* const COMMENT_COUNT = @"comment_count";
static NSString* const ATTACHMENT_COUNT = @"attachment_count";
static NSString* const ATTACHMENTS = @"attachments";
static NSString* const CONTENT_TYPE = @"content_type";
static NSString* const FEED_COMMENT_ID = @"feed_comment_id";
static NSString* const FEED_ATTACHMENT_NAME = @"filename";
static NSString* const PREVIEW_URL = @"preview_url";
static NSString* const THUMBNAIL_URL = @"preview_url2";
static NSString* const SHORT_URL = @"short_url";
static NSString* const VIDEO_URL = @"video_url";
static NSString* const VIDEO_MOBILE_URL = @"video_url_mobile";
static NSString* const ATTACHMENT_URL = @"url";
static NSString* const ATTACHMENT_SIZE = @"size";
static NSString* const Repository_TYPE = @"repository_type";
static NSString* const IS_WATCHED = @"watched";
static NSString* const FROM_USER = @"from_user";
static NSString* const TO_USER = @"to_user";
static NSString* const TO_USERS = @"to_users";
static NSString* const USER = @"user";
static NSString* const TEAM = @"team";
static NSString* const SIGNUP_RESPONSE = @"Signup_Response";
static NSString* const RESET_PWD_RESPONSE = @"Reset_PWD_Response";
static NSString* const TEAM_LIST_RESPONSE = @"Team_List_Response";
static NSString* const RENAME_GROUP_RESPONSE = @"Rename_Group_Response";
static NSString* const ADHOC_GROUP_RESPONSE = @"Adhoc_Group_Response";
static NSString* const GROUP_MEMBER_RESPONSE = @"Group_Member_Response";
static NSString* const LEAVE_CONVERSATION_RESPONSE = @"Leave_Conversation_Response";
static NSString* const USER_PROFILE_UPDATED_RESPONSE = @"User_Profile_Updated_Response";
static NSString* const OTHER_MEMBER_INVITE = @"other_member_invite";
static NSString* const FORGOT_PWD_RESPONSE = @"Forgot_Password_Response";
static NSString* const GROUP_SETTINGS_RESPONSE = @"Group_settings_Response";
static NSString* const CHANGE_GROUP_SETTINGS_RESPONSE = @"Change_Group_Settings_Response";
static NSString* const CHANGED_SETTING_VALUE = @"Changed_Settings_Value";
static NSString* const GOOGLE_CONTACTS_RESPONSE = @"GOOGLE_CONTACTS_RESPONSE";

static NSString* const USERS = @"users";
static NSString* const CONVERSATIONS = @"conversations";
static NSString* const COMMENTS = @"comments";
static NSString* const PLATFORM = @"platform";
static NSString* const FEED_PROJECT_ID = @"group_id";
static NSString* const LIKED = @"liked";
static NSString* const IS_EDITED = @"is_edited";
static NSString* const LIKED_LIST = @"liked_list";
static NSString* const USERS_LIST = @"users_list";
static NSString* const FEED_PROPERTY = @"feed_property";
static NSString* const FEED_CATEGORY = @"category";
static NSString* const FEED_TITLE = @"title";
static NSString* const IDEA = @"idea";
static NSString* const FEED_COMMENTS = @"comments";
static NSString* const UNREAD_COUNTS = @"unread_counts";
static NSString* const UNREAD_COUNT = @"unread_count";
static NSString* const FEED_LIMIT = @"limit";
static NSString* const FEEDS = @"feeds";
static NSString* const DIRECT_MSG_COUNT = @"direct_messages_count";
static NSString* const WHATS_NEW_COUNT = @"whats_new_count";
static NSString* const MENTION_COUNT = @"mention_count";
static NSString* const CUSTOM_LABELS = @"custom_labels";
static NSString* const ADDITIONAL_INFO_URL = @"additional_info_url";
static NSString* const DESCRIPTION = @"description";
static NSString* const STRIPPED_DESCRIPTION = @"stripped_description";
static NSString* const IMG_URL = @"image_url";
static NSString* const LABEL_1 = @"label_1";
static NSString* const LABEL_2 = @"label_2";
static NSString* const LABEL_3 = @"label_3";
static NSString* const LABEL_4 = @"label_4";
static NSString* const OPTIONID = @"response";
static NSString* const STATUS = @"status";
static NSString* const INVALID_MESSAGE = @"INVALID_MESSAGE";
static NSString* const FEED_TYPE = @"feed_type";
static NSString* const FEED_IS_LINK = @"is_link";
static NSString* const FEED_IS_COMPANY_ANNOUNCEMENT = @"is_company_announcement";
static NSString* const FEED_IS_ANNOUNCEMENT = @"is_announcement";
static NSString* const FEED_IS_COMPANY_MUST_READ = @"is_company_must_read";
static NSString* const FEED_IS_DEPARTMENT_MUST_READ = @"is_department_must_read";
static NSString* const FEED_ARE_COMMENTS_ENABLED = @"are_comments_enabled";
static NSString* const FEED_IS_ACK = @"is_ack";
static NSString* const FEED_IS_MENTIONED = @"is_mentioned";
static NSString* const FEED_FULL_DETAILS_MOBILE_URL = @"full_details_mobile_url";
static NSString* const IS_SYSTEM = @"is_system";
static NSString* const MLINK_FOR_DOCUMENT = @"mLink";
static NSString* const MLINK = @"mlink";
//static NSString* VIDEOURL = @"video_url_mobile";
static NSString* const FEED_IS_SHAREABLE = @"shareable";
static NSString* const FEED_SUB_CATEGORY = @"sub_category";
static NSString* const FEED_GROUP_NAME = @"group_name";
static NSString* const FEED_CONV_IMAGE_URL = @"group_image_url";
static NSString* const FEED_IS_PRIVATE = @"is_private";
static NSString* const FEED_IS_SECRET = @"is_Secret";
static NSString* const LOCATION = @"location";
static NSString* const LOCATIONS = @"locations";
static NSString* const MY_RESPONSE = @"My response";
static NSString* const FEED_EVENT_ID = @"Event ID";
static NSString* const POLL_FEED_DID_I_VOTE = @"Did I vote";
static NSString* const ATTACHMENT_REFERENCES = @"attachment_references";
static NSString* const FEED_SESSION_ID = @"session_id";
static NSString* const EVENT_START_DATE =@"event_start_date";
static NSString* const EVENT_END_DATE  =@"event_end_date";
static NSString* const EVENT_TITLE = @"event_title";
static NSString* const EVENT_LOCATION = @"event_location";
static NSString* const EVENT_RSVP =@"event_rsvp";
static NSString* const EVENT_ID= @"event_id";
static NSString* const TEAMS = @"teams";
static NSString* const MANUAL_REFRESH_VAL = @"manual_refresh_value";
static NSString* const PRIORITY_DATE = @"priority_date";

static NSString* const NOTIFICATIONS = @"notifications";
static NSString* const SENDER_ID = @"sender_id";
static NSString* const FEED_ID1 = @"feed_id";
static NSString* const SENDER_IMAGE = @"sender_image";
static NSString* const NOTIFICATION_TEXT = @"text";
static NSString* const UNREAD_NOTIFICATION_COUNT= @"whats_new_count";
static NSString* const KEY_USER_NAME1 = @"user_name";
static NSString* const KEY_MSG_TYPE = @"message_type";
static NSString* const KEY_MSG_SUB_TYPE = @"message_sub_type";
static NSString* const KEY_ATTACHMENT = @"attachment";
static NSString* const POSTED_To_ZENDESK = @"posted_to_zendesk";
static NSString* const OTHER_USER_ID = @"other_user_id";
static NSString* const IS_ACK_REQUIRED = @"is_ack_required";
static NSString* const CUSTOM_PRESENCE = @"custom_presence";

static NSString* const ACK_TYPE = @"ack_type";
static NSString* const IS_ACKED = @"is_acked";
static NSString* const KEY_Y = @"Y";
static NSString* const KEY_N = @"N";
static NSString* const KEY_TRUE = @"true";
static NSString* const KEY_FALSE = @"false";
static NSString* const ACK_TYPE_TAP = @"T";
static NSString* const ACK_TYPE_INITIAL = @"S";
static NSString* const PARTICIPANTS_COUNT = @"workflow_participants_count";
static NSString* const CONV_MEMBERS_COUNT = @"conversation_members_count";
static NSString* const CONVERSATION_NAME = @"Conversatio_Name";
static NSString* const CONV_ID = @"Conversation_id";
static NSString* const TEAM_NAME = @"team_name";
static NSString* const IS_TEAM_CHAT = @"is_team_chat";

// RSVP constants

static NSString* const MESSAGE = @"message";
static NSString* const MESSAGES = @"messages";

static int const MS_ERROR_CODE = -5000;
static int const WIPE_OUT_ERROR_CODE = -5001;
static int const DISABLE_ERROR_CODE = -5002;
static int const USER_SUSPENDED_ERROR_CODE = -5003;


// APNS SETTINGS CONSTANTS

static NSString* const IS_ACTIVE = @"is_active";
static NSString* const IM_NOTIFICATION =@"im_notifications";
static NSString* const SEND_STATUS_UPDATES = @"send_status_updates";
static NSString* const SEND_WALL_UPDATES = @"send_wall_updates";
static NSString* const SEND_DIRECT_MESSAGES = @"send_direct_messages";
static NSString* const SEND_TEAM_UPDATES = @"send_team_updates";
static NSString* const SEND_TASK_UPDATES = @"send_task_updates";
static NSString* const SEND_APPLICATION_FEEDS = @"send_application_feeds";
static NSString* const SEND_FILE_UPDATES = @"send_file_updates";
static NSString* const SEND_TEAM_CHATS = @"send_team_chats";
static NSString* const SEND_PRIVATE_CHATS = @"send_private_chats";
static NSString* const SILENT_TIME_ENABLED = @"silent_time_enabled";
static NSString* const SILENT_START_TIME = @"silent_start_time";
static NSString* const SILENT_END_TIME = @"silent_end_time";
static NSString* const TIME_ZONE_OFFSET = @"time_zone_offset";
static NSString* const DEVICE_TOKEN = @"device_token";
static NSString* const DEVICE_ID = @"device_id";
static NSString* const kAPP_ID = @"app_id";
static NSString* const kCLIENT_ID = @"client_id";
static NSString* const NOTIFICATION =@"notification";
static NSString* const SETTINGS = @"settings";

static NSString* const IDS = @"ids";
static NSString* const PERSONAL_NOTE = @"personal_note";

// Get Domain Settings
static NSString* const FEEDBACK_SUPPORT_URL = @"domain_cust_support_email";
static NSString* const COWORKER_LABEL_SINGULAR = @"coworker_label_singular";
static NSString* const COWORKER_LABEL_PLURAL = @"coworker_label_plural";
static NSString* const CONFIGURATION =  @"configuration";
static NSString* const KEY_CONFIGURATIONS =  @"configurations";
static NSString* const DOMAIN1 = @"domain";
static NSString* const PROJECT_LABEL_SINGULAR = @"project_label_singular";
static NSString* const PROJECT_LABEL_PLURAL = @"project_label_plural";
static NSString* const PROFILE_LABEL_PLURAL = @"profile_label_plural";
static NSString* const PROFILE_LABEL_SINGULAR = @"profile_label_singular";
static NSString* const INBOX_LABEL = @"inbox_label";
static NSString* const COMPANY_LABEL = @"company_label";
static NSString* const COMPANY_NEWS_LABEL = @"company_news_label";
static NSString* const COMPANY_INFO_LABEL = @"company_info_label";
static NSString* const GROUP_LABEL_SINGULAR = @"group_label_singular";
static NSString* const GROUP_LABEL_PLURAL = @"group_label_plural";
static NSString* const DEPARTMENT_LABEL_SINGULAR = @"department_label_singular";
static NSString* const DEPARTMENT_LABEL_PLURAL = @"department_label_plural";
static NSString* const OPPORTUNITY_LABEL_SINGULAR = @"opportunity_label_singular";
static NSString* const OPPORTUNITY_LABEL_PLURAL = @"opportunity_label_plural";
static NSString* const SERVER_URL = @"server_url";
static NSString* const INVITATION_PRIVACY = @"invitation_privacy";
static NSString* const INVITATION_OUTOF_NETWORK = @"can_invite_without_company_email";
static NSString* const IS_LDAP_ENABLED = @"is_synched_domain";
static NSString* const DATE_FORMAT = @"date_format";
static NSString* const TIME_FORMAT = @"time_format";
static NSString* const STORAGE_TYPE = @"storage_location";
static NSString* const ENABLE_APPLICATION_MODULE = @"enable_application_module";
static NSString* const ENABLE_COLLEAGUE_MODULE = @"enable_colleague_module";
static NSString* const ENABLE_COMPANY = @"enable_company_module";
static NSString* const ENABLE_COMPANY_INFO = @"enable_company_info";
static NSString* const ENABLE_COMPANY_NEWS = @"enable_company_news";
static NSString* const ENABLE_DOCUMENT_MODULE = @"enable_document_module";
static NSString* const ENABLE_GROUP_CHAT_MODULE = @"enable_group_chat_module";
static NSString* const ENABLE_GROUP_MODULE = @"enable_group_module";
static NSString* const ENABLE_IDEA_MODULE = @"enable_idea_module";
static NSString* const EENABLE_PROJECT_MODULE = @"enable_project_module";
static NSString* const ENABLE_WIKI_MODULE = @"enable_wiki_module";
static NSString* const ENABLE_DEPARTMENT_MODULE = @"enable_department_module";
static NSString* const ENABLE_LEVELS_BADGES_MODULE = @"enable_gamification";
static NSString* const ENABLE_POSTS_MODULE = @"enable_posts_module";
static NSString* const ENABLE_EVENTS_APP = @"enable_events_app";
static NSString* const ENABLE_MICROBLOGGING_MODULE = @"enable_microblogging_module";
static NSString* const ENABLE_ORG_CHART_APP = @"enable_org_chart_app";
static NSString* const ENABLE_ORG_TEAMS_MODULE = @"enable_org_teams_module";
static NSString* const ENABLE_POKE_APP = @"enable_poke_app";
static NSString* const ENABLE_POLL_APP = @"enable_poll_app";
static NSString* const ENABLE_SHARE_OVER_EMAIL = @"enable_share_over_email";
static NSString* const ENABLE_SYNC = @"enable_sync";
static NSString* const ENABLE_TASKS_MODULE = @"enable_tasks_module";

static NSString* const EVENTS_MODULE = @"enable_events_app";
static NSString* const PROJECTS_MODULE = @"enable_project_module";
static NSString* const TASK_MODULE = @"enable_tasks_module";
static NSString* const DOCUMENTS_MODULE = @"enable_document_module";
static NSString* const IDEA_MODULE = @"enable_idea_module";
static NSString* const CRM_MODULE = @"enable_crm_module";

static NSString* const TASK_CONFIGURATION = @"task_config";
static NSString* const LABEL_FOR_TASK = @"label_for_task";
static NSString* const LABEL_FOR_TASK_PLURL = @"label_for_task_plural";
static NSString* const LABLE_FOR_MILESTONE = @"label_for_milestone";
static NSString* const LABEL_FOR_MILESTONE_PLURAL = @"label_for_milestone_plural";
static NSString* const LABEL_FOR_CURRENT_TASK = @"label_for_current";
static NSString* const LABLE_FOR_BACKLOG_TASK = @"label_for_backlog";// Pending
static NSString* const LABEL_FOR_ICEBOX_TASK = @"label_for_icebox";// Queued
static NSString* const LABEL_FOR_DONE_TASK = @"label_for_done";//COMPLETED
static NSString* const LABEL_FOR_MY_WORK_VIEW_TASK = @"label_for_my_work_view";
static NSString* const LABEL_FOR_TYPE_FEATURED_TASK = @"label_for_type_feature";
static NSString* const LABEL_FOR_TYPE_DEFEAT_TASK = @"label_for_type_defect";
static NSString* const LABEL_FOR_TYPE_CHORE_TASK = @"label_for_type_chore";
static NSString* const LABEL_FOR_TYPE_OTHER_TASK  =@"label_for_type_other";
static NSString* const LABEL_FOR_TYPE_DOCUMENTATION_TASK = @"label_for_type_documentation";

// Domain user Constants
static NSString* const EMAIL_ADDRESSES = @"email_addresses";
static NSString* const EMAIL_ADDRESS = @"email_address";
static NSString* const ADDRESS = @"address";
static NSString* const USER_TYPE = @"user_type";
static NSString* const USER_MENTION = @"user_mention";
static NSString* const AKA = @"aka";
static NSString* const FOLLOWERS = @"followers";
static NSString* const FOLLOWING = @"following";
static NSString* const ABOUT_ME = @"about_me";
static NSString* const HOME_ADDRESS = @"home_address";
static NSString* const WORK_ADDRESS = @"work_address";
static NSString* const PHONE_NUMBERS = @"phone_numbers";
static NSString* const PHONE_NUMBER = @"phone_number";
static NSString* const MOBILE_NUMBER = @"mobile_number";
static NSString* const MOBILE_NUMBER_NULL_String = @"null";//server side we are getting null string , so null check
static NSString* const LANDLINE_NUMBER = @"landline_number";
static NSString* const USER_ALREADY_LOGGED_IN= @"user_already_logged_in";
static NSString* const EXTENSION = @"ext";
static NSString* const FAX = @"fax";
static NSString* const EDUCATION = @"education";
static NSString* const EXPERIENCE = @"experience";
static NSString* const EXPERTISE =  @"expertise";
static NSString* const TITLE = @"title";
static NSString* const SOCKET_URI =  @"socket_uri";
static NSString* const HTTP_URI =  @"http_uri";
static NSString* const COMMENTS_ORDER = @"comments_order";
static NSString* const PUSH_URL =  @"push_url";
static NSString* const PUSH_SECONDARY_URL =  @"push_secondary_url";
static NSString* const SESSIONID = @"session_id";
static NSString* const SESSIONID1 = @"sessionid";
static NSString* const XML = @"xml";
static NSString* const CONTACT_WORK_TYPE = @"Work";
static NSString* const CONTACT_HOME_TYPE = @"Home";
static NSString* const FIRST_TIME_LOGIN = @"is_first_login";
static NSString* const SIGNIFICANT_OTHER = @"significant_other";
static NSString* const TIME_ZONE  = @"time_zone";
static NSString* const SCHOOL  = @"school";
static NSString* const DEGREE = @"degree";
static NSString* const START_YEAR = @"start_year";
static NSString* const END_YEAR = @"end_year";
static NSString* const COMPANY = @"company";
static NSString* const COMPANY_NAME = @"name";
static NSString* const SCHOOL_NAME = @"name";
static NSString* const WORK_TYPE = @"work";
static NSString* const HOME_TYPE = @"home";
static NSString* const PHOTO_SHAPE = @"photo_shape";
static NSString* const IS_DRIVER = @"is_driver";
static NSString* const IS_COORDINATOR = @"is_coordinator";
static NSString* const MESSAGE_ID1 = @"messageid";
static NSString* const FULL_PROFILE = @"full_profile";

//User profile section titles keys
static NSString* const SECTION_HEADER_KEY = @"key";
static NSString* const SECTION_HEADER_TITLE = @"label";
static NSString* const ROW_ORDER_KEY = @"row_order";

//All sections keys
static NSString* const KEY_SECTION_HEADER_OVERVIEW = @"overview";
static NSString* const KEY_SECTION_HEADER_ADDITIONAL_INFO = @"additional_information";
static NSString* const KEY_SECTION_HEADER_ABOUTME = @"about_me";
static NSString* const KEY_SECTION_HEADER_SUMMARY = @"summary";
static NSString* const KEY_SECTION_HEADER_EXPERIENCE = @"experience";
static NSString* const KEY_SECTION_HEADER_EDUCATION = @"education";
static NSString* const KEY_SECTION_HEADER_PERSONAL_DETAILS = @"personal_details";

//Rows in Overview section
static NSString* const KEY_ROW_MANAGER = @"manager";
static NSString* const KEY_ROW_WORK_EMAIL = @"work_email";
static NSString* const KEY_ROW_WORK_PHONE = @"work_phone";
static NSString* const KEY_ROW_MOBILE = @"mobile";
static NSString* const KEY_ROW_FAX = @"fax";
static NSString* const KEY_ROW_SKYPE_ID = @"skype_id";
static NSString* const KEY_ROW_LINKEDIN_ID = @"linkedin_id";

//Rows in AboutMe section
static NSString* const KEY_ROW_AKA = @"also_know_as";
static NSString* const KEY_ROW_EXPERTISE = @"expertise";
static NSString* const KEY_ROW_SKILLS = @"skills";
static NSString* const KEY_ROW_DEPT = @"departments";
static NSString* const KEY_ROW_ORGANISATION = @"organizations";

//Rows in summary section
static NSString* const KEY_ROW_BIO = @"bio";

//Rows in Personal Details Section
static NSString* const KEY_ROW_DOB = @"date_of_birth";
static NSString* const KEY_ROW_GENDER = @"gender";
static NSString* const KEY_ROW_RELATIONSHIP_STATUS = @"relationship_status";
static NSString* const KEY_ROW_SIGNIFICANT_OTHER = @"significant_other";
static NSString* const KEY_ROW_SIGNIFICANT_OTHER_DOB = @"significant_other_dob";
static NSString* const KEY_ROW_KIDS = @"kids";
static NSString* const KEY_ROW_ADDRESS_KNOWN = @"address_known";
static NSString* const KEY_ROW_LANGUAGES_KNOWN = @"languages_known";

// Login Constants
static NSString* const K_MANGOAPPS_APIKEY = @"MangoMobile";
static NSString* const K_OFFICE_CHAT_APIKEY =@"OfficeChat";

static NSString* const API_KEY = @"api_key";
static NSString* const K_PASSWORD = @"password";
static NSString* const K_EMAIL =@"email";
static NSString* const K_NAME = @"name";
static NSString* const USERNAME = @"username";
static NSString* const CURRENT_VERSION = @"current_version";
static NSString* const K_APIKEY = @"OfficeChat";
static NSString* const K_DEVICE_ID = @"device_id";
static NSString* const K_DEVICE_TOKEN = @"device_token";
static NSString* const K_CLIENT_ID = @"client_id";
static NSString* const K_APP_ID = @"app_id";
static NSString* const K_ISACTIVE = @"is_active";
static NSString* const K_IMPLICIT_LOGIN_KEY =  @"is_implicit_login";
static NSString* const K_ENVIRONMENT = @"environment";
//static NSString* K_APIKEY = @"MangoMobile";

static NSString* const K_CONV_ID = @"convId";
static NSString* const K_GROUP = @"group";
static NSString* const K_DIRECT = @"direct";
static NSString* const K_USER_WALL = @"user_wall";
static NSString* const K_STATUS = @"status";
static NSString* const K_WRITE_COMMENT = @"write_comment";
static NSString* const K_ASK_QUESTION = @"ask_question";

static NSString* const K_APIKEY_OFC_CHAT = @"OfficeChat";
static NSString* const K_NEW_PWD = @"new_password";
static NSString* const K_OLD_PWD = @"old_password";

// Get Chats Service
static NSString* const K_CHAT = @"chat";
static NSString* const GROUP_ID = @"group_id";

// Start Conversation Service
static NSString* K_MUTE_START_TIME = @"mute_start_time";
static NSString* K_MUTE_END_TIME = @"mute_end_time";
static NSString* K_IS_MUTED = @"is_muted";
static NSString* const K_CONVERSATION  = @"conversation";
static NSString* const K_OPPORTUNITY  = @"opportunity";
static NSString* const K_ADD_MEMBER_IDs = @"add_member_ids";
static NSString* const K_MEMBER_EMAIL_IDs = @"member_email_ids";
static NSString* const K_REMOVE_MEMBER_IDs = @"remove_member_ids";
static NSString* const K_INVITE_MSG = @"invite_msg";
static NSString* const LAST_MSG = @"last_msg";
static NSString* const LAST_MSG_SENDER_NAME = @"last_msg_sender_name";
static NSString* const K_TIMESTAMP = @"timeStamp";
static NSString* const K_MESSAGE_ATTACHMENT_ID = @"msg_attachment_id";
static NSString* const K_TEAM_NAME = @"name";
static NSString* const K_CONVERSATION_IMAGE_URL = @"conv_image_url";
static NSString* const K_FILE = @"file";
static NSString* const K_VIDEO_PREVIEW = @"preview_medium";
static NSString* const K_IS_VIDEO_CONVERTED = @"is_video_converted";
static NSString* const K_TEAMS = @"teams";


// acknowledge message
static NSString* const K_CONVERSATION_MSG_ID = @"conversation_msg_id";
static NSString* const K_INITIALS = @"initials";
static NSString* const K_CONVERSATION_MSG = @"conversation_msg";
static NSString* const K_ACKNOWLEDGEMENTS = @"acknowledgements";
static NSString* const K_ACKNOWLEDGED_USERS = @"acknowledge_users";
static NSString* const K_NOT_ACKNOWLEDGED_USERS = @"not_acknowledge_users";

#define K_INBOX_LIMIT 20
#define K_DOMAIN_USER_LIMIT 250
#define K_GROUP_MEMBER_LIMIT 200

#define KeyErrorNote        @"error_note"
#define KeyErrorCode        @"error_code"
#define KeyAdditionInfo     @"additional_info"
#define KeyAdditionalInfo   @"error_additionalInfo"

static NSString* const K_User_Status_Deactivated = @"USER_DEACTIVATED";
static NSString* const K_Password_MisMatch = @"PASSWORD_MISMATCH";
static NSString* const K_User_Status_Suspended = @"ACCOUNT_SUSPENDED";
static NSString* const K_Conversation_Deleted = @"CONV_DELETED" ;
static NSString* const K_Is_Group = @"is_group";
static NSString* const Key_Inbox_Req_Type = @"inbox_req_type";

#define REQUEST_TYPE_GET @"GET"
#define REQUEST_TYPE_POST @"POST"
#define REQUEST_TYPE_DELETE @"DELETE"

#define REQUEST_TYPE_PUT @"PUT"
#define NEW_TASK    @"newTask"
#define OLD_TASK     @"oldTask"

#define EFEED_TYPE @"feedType"
#define FEED_OFFSET @"feedoffset"
#define FEED_LAST_UPDATED_TIME @"feed_last_updated_time"
#define IS_FIRST_LAUNCH @"isfirstLaunch"
#define SERVICE_OBJECT @"self"
#define DOMAIN_USER_ID @"felixUserId"
#define MY_USER_ID @"userid"
#define TEAM_TYPE @"teamType"
#define TEAM_ID @"teamId"
#define IS_MY_WALL @"isMyWall"
#define K_TASKTYPE @"taskType"
#define KOffset @"offset"
#define K_PROJECT_ID @"k_project_id"

/* Get Files Folders List Service*/
#define GOT_DOCUMENT_RESPONSE_SUCCESS @"GOT_DOCUMENT_RESPONSE_SUCCESS"
#define GOT_DOCUMENT_RESPONSE_FAILURE @"GOT_DOCUMENT_RESPONSE_FAILURE"
#define GOT_DOCUMENT_DETAILS_RESPONSE_SUCCESS @"GOT_DOCUMENT_DETAILS_RESPONSE_SUCCESS"
#define GOT_DOCUMENT_DETAILS_RESPONSE_FAILURE @"GOT_DOCUMENT_DETAILS_RESPONSE_FAILURE"
#define FOLDERS @"folders"
#define FILES @"files"
#define ISMANUALREFRESH @"_is_manual_refresh"

/*Logout service*/

static NSString* const K_STOP_NOTIFICATION = @"stop_notification";
static NSString* const STOP_NOTIFICATION_KEY = @"Y";
static NSString* const HAS_PREMIUM_ACCOUNT = @"has_premium_account";
#define KEY_HAS_DEFAULT_PHOTO @"has_default_photo"
#define KEY_CONV_MUTE_VALUE @"_is_conv_muted_"
#define KEY_CHAT_HISTORY_MSG_DELIVERY_STARUS @"msg_delivery_status"
#define CUSTOM_STATUS @"custom_status"
#define ACTIVE_AT_PRESENCE @"active_at"

static NSString* const MESSAGE_ID = @"msg_id";
static NSString * const SENDER = @"sender";
static NSString * const CELL = @"self";
static NSString * const DELETE_MESSAGE = @"delete_message";
static NSString * const DISPLAY_ALERT =@"display_alert";


/* Site Pages */
static NSString* const SITE_LIST_RESPONSE = @"Site_List_RESPONSE";
static NSString* const SITE_PAGES = @"site_pages";
static NSString* const SITE_PAGE_Id = @"page_Id";
static NSString* const SITE_CONVERSATION_Id = @"conversation_Id";
static NSString* const SITE_MANUAL_REFRESH = @"site_manual_refresh";
static NSString* const SITE_FETCH_OLDER = @"site_fetch_older";
static NSString* const SITE_BANNER_IMAGE_URL = @"image_url";

static NSString * const SiteDetailsURL = @"full_details_mobile_url";
static NSString * const SiteHasSubPage = @"has_sub_page";
static NSString * const SiteID = @"id";
static NSString * const SiteIsSystem = @"is_system";
static NSString * const SiteName = @"name";
static NSString * const SiteNonMemberPageAccess = @"non_member_page_access";
static NSString * const SitePosition = @"position";

static NSString * const K_PROJECT = @"project";
static NSString * const K_COMMENT = @"comment";


static NSString * const K_CONVERSATION_TYPE_ADHOC = @"A";
static NSString * const K_CONVERSATION_TYPE_NA = @"NA";

static NSString* const COMPANY_NEWS_LIST_RESPONSE = @"COMPANY_NEWS_List_RESPONSE";
static NSString* const COMPANY_NEWS_POSTS = @"posts";

/* Company News*/
static NSString * const CompanyNewsID = @"id";
static NSString * const CompanyNewsTitle = @"title";
static NSString * const CompanyNewsUrl = @"url";
static NSString * const CompanyNewsDescription = @"description";
static NSString * const CompanyNewsStripped_description = @"stripped_description";
static NSString * const KEY_POSTS_CONVERSATIONID = @"POSTS_CONVERSATIONID";
static NSString * const KEY_POSTS_IS_MANUAL_REFRESH = @"IS_MANUAL_REFRESH";
static NSString * const KEY_POSTS_IS_OLDER_REFRESH = @"IS_OLDER_REFRESH";

/* Wikis */
static NSString* const WIKIS_LIST_RESPONSE = @"Wikis_List_RESPONSE";
static NSString* const KEY_WIKIS = @"wikis";
static NSString* const KEY_WIKIS_IS_MANUAL_REFRESH = @"IS_MANUAL_REFRESH";
static NSString* const KEY_WIKIS_IS_OLDER_REFRESH = @"IS_OLDER_REFRESH";
static NSString* const KEY_WIKIS_CONVERSATIONID = @"WIKIS_CONVERSATIONID";

static NSString * const WikisID = @"id";
static NSString * const WikisTitle = @"title";
static NSString * const WikisUrl = @"url";
static NSString * const WikisConversationId = @"conversation_id";
static NSString * const WikisCreatedAt = @"created_at";
static NSString * const WikisCreatedBy = @"created_by";
static NSString * const WikisCreatorName = @"creator_name";

/* Company Posts */
static NSString* const COMPANYPOSTS_LIST_RESPONSE = @"CompanyPosts_List_RESPONSE";
static NSString* const KEY_COMPANYPOSTS_IS_MANUAL_REFRESH = @"IS_Posts_MANUAL_REFRESH";
static NSString* const KEY_COMPANYPOSTS_IS_OLDER_REFRESH = @"IS_Posts_OLDER_REFRESH";
static NSString* const KEY_COMPANYPOSTS_CONVERSATIONID = @"Company_Posts_CONVERSATIONID";
static NSString * const GOT_COMPANYPOSTS_RESPONSE_SUCCESS = @"GOT_COMPANYPOSTS_RESPONSE_SUCCESS";
static NSString * const GOT_COMPANYPOSTS_RESPONSE_FAILURE = @"GOT_COMPANYPOSTS_RESPONSE_FAILURE";
static NSString* const KEY_POSTS = @"posts";

static NSString * const CompanyPostID = @"id";
static NSString * const CompanyPostTitle = @"title";
static NSString * const CompanyPostUrl = @"url";
static NSString * const CompanyPostDescription = @"description";
static NSString * const CompanyPost_isCompany_announcement = @"is_company_announcement";
static NSString * const CompanyPost_is_announcement = @"is_announcement";
static NSString * const CompanyPost_isCompany_mustRead = @"is_company_must_read";
static NSString * const CompanyPost_isDepartment_mustRead = @"is_department_must_read";
static NSString * const CompanyPost_created_at = @"created_at";
static NSString * const CompanyPost_created_by = @"created_by";
static NSString * const CompanyPost_creator_name = @"creator_name";

static NSString* OBJECTS = @"objects";
static NSString* OBJECT = @"object";
static NSString* GOT_ASSOCIATED_OBJ_SUCCESS = @"GOT_ASSOCIATED_OBJ_SUCCESS";
static NSString* GOT_ASSOCIATED_OBJ_FAILURE = @"GOT_ASSOCIATED_OBJ_FAILURE";
static NSString* OBJECT_ID = @"object_id";
static NSString* PRIMARY_ARTIST = @"primary_artist";
static NSString* PRIMARY_DEPT = @"primary_department";

static NSString* CLIENTS = @"clients";
static NSString* CLIENT = @"client";
static NSString* GOT_ASSOCIATED_CLIENT_SUCCESS = @"GOT_ASSOCIATED_CLIENT_SUCCESS";
static NSString* GOT_ASSOCIATED_CLIENT_FAILURE = @"GOT_ASSOCIATED_CLIENT_FAILURE";


/* Configuration updates */
static NSString *const MinPasswordLen = @"min_password_length";
static NSString *const PasswordComplexity = @"password_complexity";
static NSString *const TwoFactorAuth = @"two_factor_auth";
static NSString *const AuthValidity = @"auth_validity";
static NSString *const TokenValidity = @"token_validity";
static NSString *const DomainPlan = @"domain_plan";
static NSString *const BasicPlan = @"basic";
static NSString *const EnterprisePlan = @"enterprise";
static NSString *const PremiumPlan = @"premium";
static NSString *const DomainEmailName = @"domain_email_name";

static NSString* const KEY_GOOGLE_RESPONSE = @"KEY_GOOGLE_RESPONSE";

static NSString * const GOT_SEARCH_TEAMS_ON_SERVER_RESPONSE_SUCCESS = @"GOT_SEARCH_TEAMS_ON_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_SEARCH_TEAMS_ON_SERVER_RESPONSE_FAILURE = @"GOT_SEARCH_TEAMS_ON_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_SEARCH_COLLEAGUES_ON_SERVER_RESPONSE_SUCCESS = @"GOT_SEARCH_COLLEAGUES_ON_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_SEARCH_COLLEAGUES_ON_SERVER_RESPONSE_FAILURE = @"GOT_SEARCH_COLLEAGUES_ON_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_OPPORUNITY_PICKER_LIST_SERVER_RESPONSE_SUCCESS = @"GOT_OPPORUNITY_PICKER_LIST_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_OPPORUNITY_PICKER_LIST_SERVER_RESPONSE_FAILURE = @"GOT_OPPORUNITY_PICKER_LIST_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_OPPORUNITY_LIST_SERVER_RESPONSE_SUCCESS = @"GOT_OPPORUNITY_LIST_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_OPPORUNITY_LIST_SERVER_RESPONSE_FAILURE = @"GOT_OPPORUNITY_LIST_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_ARCHIVED_OPPORUNITY_LIST_SERVER_RESPONSE_SUCCESS = @"GOT_ARCHIVED_OPPORUNITY_LIST_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_ARCHIVED_OPPORUNITY_LIST_SERVER_RESPONSE_FAILURE = @"GOT_ARCHIVED_OPPORUNITY_LIST_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_OPPORUNITY_BOOKMARK_SERVER_RESPONSE_SUCCESS = @"GOT_OPPORUNITY_BOOKMARK_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_OPPORUNITY_BOOKMARK_SERVER_RESPONSE_FAILURE = @"GOT_OPPORUNITY_BOOKMARK_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_OPPORUNITY_DETAILS_SERVER_RESPONSE_SUCCESS = @"GOT_OPPORUNITY_DETAILS_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_OPPORUNITY_DETAILS_SERVER_RESPONSE_FAILURE = @"GOT_OPPORUNITY_DETAILS_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_UPDATE_USER_ROLE_RESPONSE_SERVER_RESPONSE_SUCCESS = @"GOT_UPDATE_USER_ROLE_RESPONSE_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_UPDATE_USER_ROLE_RESPONSE_SERVER_RESPONSE_FAILURE = @"GOT_UPDATE_USER_ROLE_RESPONSE_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_CREATE_OPPORUNITY_SERVER_RESPONSE_SUCCESS = @"GOT_CREATE_OPPORUNITY_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_CREATE_OPPORUNITY_SERVER_RESPONSE_FAILURE = @"GOT_CREATE_OPPORUNITY_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_MAKE_OR_REMOVE_ADMIN_RESPONSE_SERVER_RESPONSE_SUCCESS = @"GOT_MAKE_OR_REMOVE_ADMIN_RESPONSE_SERVER_RESPONSE_SUCCESS";
static NSString * const GOT_MAKE_OR_REMOVE_ADMIN_RESPONSE_SERVER_RESPONSE_FAILURE = @"GOT_MAKE_OR_REMOVE_ADMIN_RESPONSE_SERVER_RESPONSE_FAILURE";

static NSString * const GOT_OPPORTUNITY_ARCHIVE_RESPONSE_SUCCESS = @"OPPORTUNITY_ARCHIVE_RESPONSE_SUCCESS";
static NSString * const GOT_OPPORTUNITY_ARCHIVE_RESPONSE_FAILURE = @"OPPORTUNITY_ARCHIVE_RESPONSE_FAILURE";

static NSString * const  BUSINESS_GROUPS = @"business_groups";
static NSString * const  BUSINESS_GROUP = @"business_group";
static NSString * const  CURRENCIES = @"currencies";
static NSString * const  CURRENCIE = @"currency";
static NSString * const  DEPARTSMENTS = @"departments";
static NSString * const  DEPARTSMENT = @"department";
static NSString * const  ROLES = @"roles";
static NSString * const  ROLE = @"role";
static NSString * const  STAGES = @"stages";
static NSString * const  STAGE = @"stage";
static NSString * const  OPP_TYPES = @"opp_types";
static NSString * const  OPP_TYPE = @"opp_type";
static NSString * const  IS_OPPORTUNITY_BOOKMARKED = @"is_opportunity_bookmarked";
static NSString * const  IS_OPPORTUNITY_ARCHIVED = @"is_opportunity_archived";
static NSString * const  MAIN_CLIENT_NAME = @"main_client_name";
static NSString * const  MAIN_CLIENT_NUMBER = @"main_client_number";
static NSString * const  DEADLINE_DATE = @"deadline_date";
static NSString * const  MY_OPPORTUNITY = @"my_opportunity";
static NSString * const  OPPORTUNITY_TYPE = @"type";

static NSString * const  CREATOR_NAME = @"creator_name";
static NSString * const  IS_OPPORTUNITY = @"is_opportunity";

static NSString * const KEY_INVITE_COWORKER_FEED =  @"feed";
static NSString * const KEY_INVITE_COWORKER_ATTACHMENTS = @"attachments";
static NSString * const KEY_INVITE_COWORKER_USERS = @"users";
static NSString * const KEY_INVITE_COWORKER_FEEDTYPE = @"feed_type";
static NSString * const KEY_INVITE_COWORKER_BODY = @"body";

static NSString * const  KEY_OPPO_NAME = @"name";
static NSString * const  KEY_OPPO_DESCRIPTION = @"description";
static NSString * const KEY_OPPO_BUSINESS_DEPARTMENT_LIST = @"departments_list";
static NSString * const KEY_OPPO_BUSINESS_GROUP_LIST = @"business_groups_list";
static NSString * const KEY_OPPO_TYPE = @"type";
static NSString * const KEY_OPPO_CLOSE_DATE = @"close_date";
static NSString * const KEY_OPPO_LOW_ESTIMATE = @"low_estimate";
static NSString * const KEY_OPPO_HIGH_ESTIMATE = @"high_estimate";
static NSString * const KEY_OPPO_CURRENCY = @"currency";
static NSString * const KEY_OPPO_STAGE = @"stage";
static NSString * const KEY_OPP_SINGLE_BUSINESS_GROUP = @"single_business_group";
static NSString * const AM_A_DRIVER = @"am_i_driver";
static NSString * const AM_A_COORDINATOR = @"am_i_coordinator";
static NSString * const SENDER_NAME = @"sender_name";
static NSString * const IMMEDIACY = @"immediacy";
static NSString * const GROUP_SUB_TYPE = @"group_sub_type";
static NSString * const KSearchString  = @"SearchString";
static NSString * const DEFAULT_MESSAGE_PROMPT = @"default_message_prompt";
static NSString * const NOTIFICATION_STR = @"notification_str";
static NSString * const NOTIFICATION_CONTAXT = @"notification_context";
static NSString * const KEY_UNREAD_COUNTS = @"unread_counts";
static NSString* const SIGNUP_UI_RESPONSE = @"Signup_UI_Response";