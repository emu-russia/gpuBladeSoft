void sub_6F733F20()
{
  int v0; // eax@8

  nullsub_10();
  dword_6FD400E8 = 0;
  dword_6FBB5098 = 0;
  if ( dword_6FD400E4 )
  {
    sub_6F88C240(dword_6FD400E4);
    dword_6FD400E4 = 0;
  }
  if ( !dword_6FD400E0 )
  {
    if ( !dword_6FBB5078 )
      goto LABEL_5;
LABEL_10:
    sub_6F753BD0();
    if ( !dword_6FBB5094 )
      goto LABEL_6;
    goto LABEL_11;
  }
  sub_6F753CE0();
  if ( dword_6FBB5078 )
    goto LABEL_10;
LABEL_5:
  if ( !dword_6FBB5094 )
    goto LABEL_6;
LABEL_11:
  sub_6F753270();
LABEL_6:
  dword_6FD400DC = 0;
  sub_6F72F480("Video4 recording stopped", "[GPU] Close()\n");
  if ( dword_6FD400D8 )
  {
    sub_6F88C240(dword_6FD400D8);
    dword_6FD400D8 = 0;
  }
  byte_700584CC = 1;
  sub_6F938660((unsigned int *)&dword_6FBBFBEC);
  sub_6F733910();
  sub_6F731250();
  v0 = *(_DWORD *)(dword_6FBB51E8 + 40);
  sub_6F6A6330();
  dword_6FB489CC = 1;
  dword_700584C8 = 0;
}
