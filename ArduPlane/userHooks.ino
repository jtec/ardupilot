// User defined tasks.

static void userHook_50Hz(){
  gcs_send_message(MSG_HEARTBEAT);
}
