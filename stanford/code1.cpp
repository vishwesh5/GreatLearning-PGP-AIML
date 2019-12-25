void bar(char *a, char *b) {
  strcpy(b, a);
  printf("Copied A to B\n");
}

/**
 * Returns between 1 and 64 arbitrary characters 
 * (including hex characters) from the 
 * user.  
 * 
 * The returned string must always be freed by the 
 * caller.
 */

char *fetch_user_input() {
  /* Some code here */
  return user_input;
}

void foo() {
  char buf[16];
  char *user_input;
  while (true) {
    user_input = fetch_user_input();
    if (is_exit_command(user_input)) {
      break;
    }
    printf("Received: ");
    printf(user_input);
    printf("\n");
    bar(user_input, buf);
    do_something(buf, 16); // Operates on at most 16 elements of buf.
    if (user_input) {
      free(user_input);
    }
  }
}


