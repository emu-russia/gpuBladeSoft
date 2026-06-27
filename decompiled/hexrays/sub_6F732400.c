void sub_6F732400()
{
  void **v0; // ebx@3
  _BYTE **v1; // ecx@7
  void **v2; // ecx@9
  void **v3; // edi@10
  int *v4; // [sp+8h] [bp-44h]@0
  char *v5; // [sp+18h] [bp-34h]@7
  char v6; // [sp+20h] [bp-2Ch]@7

  nullsub_10();
  if ( dword_6FBB9554 )
  {
    shutdown(dword_6FD40104, 2);
    closesocket(dword_6FD40104);
    WSACleanup();
  }
  nullsub_10();
  v0 = (void **)dword_6FBBFBE0;
  if ( dword_6FBBFBE0 != &dword_6FBBFBE0 )
  {
    do
    {
      while ( 1 )
      {
        if ( !FreeLibrary(*(HMODULE *)v0[2]) )
        {
          GetLastError();
          v1 = (_BYTE **)v0[2];
          v5 = &v6;
          LOBYTE(v4) = 0;
          sub_6F93A6C0((int)&v5, v1[10], &v1[11][(_DWORD)v1[10]], (int)v4);
          v4 = (int *)&v5;
          nullsub_10();
          if ( v5 != &v6 )
            break;
        }
        v0 = (void **)*v0;
        if ( v0 == &dword_6FBBFBE0 )
          goto LABEL_9;
      }
      j_free_1(v5);
      v0 = (void **)*v0;
    }
    while ( v0 != &dword_6FBBFBE0 );
LABEL_9:
    v2 = (void **)dword_6FBBFBE0;
    if ( dword_6FBBFBE0 != &dword_6FBBFBE0 )
    {
      do
      {
        v3 = (void **)*v2;
        j_free_1(v2);
        v2 = v3;
      }
      while ( v3 != &dword_6FBBFBE0 );
    }
  }
  dword_6FBBFBE4 = (int)&dword_6FBBFBE0;
  dword_6FBBFBE0 = &dword_6FBBFBE0;
  dword_6FBBFBE8 = 0;
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
  dword_6FB489C8 = 1;
  dword_700584C0 = 0;
}
