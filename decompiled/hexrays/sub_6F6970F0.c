void sub_6F6970F0()
{
  nullsub_10();
  if ( dword_6FBB9554 )
  {
    shutdown(dword_6FD40104, 2);
    closesocket(dword_6FD40104);
    WSACleanup();
  }
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
  sub_6F75B040();
  nullsub_12();
  nullsub_6();
  sub_6F75F0D0();
  sub_6F732260();
  sub_6F761860(&dword_6FD40974);
  sub_6F761860(&dword_6FD40970);
  sub_6F761860(&dword_6FD4096C);
  sub_6F75A490(&dword_6FD40978);
  sub_6F75B000();
  sub_6F7616C0();
  sub_6F75A010();
  nullsub_9();
  free(*(void **)(dword_6FBB51E8 + 8));
  free((void *)dword_6FBB51E8);
  if ( dword_6FBB958C )
    sub_6F684D90();
  dword_6F96D01C = 1;
  dword_6FD412D0 = 0;
}
