int sub_6F697340()
{
  int v0; // eax@10
  int result; // eax@17

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
LABEL_19:
    sub_6F753BD0();
    if ( !dword_6FBB5094 )
      goto LABEL_6;
    goto LABEL_20;
  }
  sub_6F753CE0();
  if ( dword_6FBB5078 )
    goto LABEL_19;
LABEL_5:
  if ( !dword_6FBB5094 )
    goto LABEL_6;
LABEL_20:
  sub_6F753270();
LABEL_6:
  dword_6FD400DC = 0;
  sub_6F72F480("Video4 recording stopped", "[GPU] Close()\n");
  if ( dword_6FD400D8 )
  {
    sub_6F88C240(dword_6FD400D8);
    dword_6FD400D8 = 0;
  }
  if ( dword_6FBB9554 )
  {
    shutdown(dword_6FD40104, 2);
    closesocket(dword_6FD40104);
    WSACleanup();
  }
  sub_6F733910();
  sub_6F731250();
  v0 = *(_DWORD *)(dword_6FBB51E8 + 40);
  sub_6F6A6330();
  byte_6FD40100 = 1;
  sub_6F938660((unsigned int *)&dword_6FBBFDC4);
  sub_6F7511F0();
  if ( dword_6FBBDB6C )
  {
    free((void *)dword_6FBBDB5C);
    dword_6FBBDB5C = 0;
    dword_6FBBDB6C = 0;
  }
  sub_6F697000();
  sub_6F75A490(&dword_6FD40144);
  sub_6F75A490(&dword_6FD40140);
  sub_6F760210(dword_6FBB5084);
  dword_6FBB5084 = 0;
  dword_6FBB5068 = 0;
  sub_6F760210(dword_6FD400FC);
  sub_6F760210(dword_6FD400F8);
  dword_6FD400F8 = 0;
  dword_6FBB505C = 0;
  sub_6F760210(dword_6FD400F4);
  if ( dword_6FD400F0 )
  {
    sub_6F760210(dword_6FD400F0);
    dword_6FD400F0 = 0;
  }
  if ( dword_6FD400EC )
  {
    sub_6F760210(dword_6FD400EC);
    dword_6FD400EC = 0;
  }
  nullsub_12();
  nullsub_6();
  sub_6F75F0D0();
  if ( dword_6FBB958C )
  {
    sub_6F684D90();
    result = 0;
  }
  else
  {
    result = 0;
  }
  return result;
}
