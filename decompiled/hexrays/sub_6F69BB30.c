int sub_6F69BB30()
{
  int v0; // eax@2
  u_long v1; // eax@3
  int result; // eax@4
  int v3; // [sp+2Ch] [bp-1B0h]@1
  int v4; // [sp+30h] [bp-1ACh]@3
  u_long v5; // [sp+34h] [bp-1A8h]@3
  int v6; // [sp+38h] [bp-1A4h]@3
  int v7; // [sp+3Ch] [bp-1A0h]@3
  char v8; // [sp+40h] [bp-19Ch]@1

  v3 = 1;
  if ( WSAStartup(2u, (LPWSADATA)&v8) )
    goto LABEL_7;
  v0 = socket(2, 1, 0);
  dword_6FD40104 = v0;
  if ( v0 == -1 )
    goto LABEL_7;
  setsockopt(v0, 0xFFFF, 4, (const char *)&v3, 4);
  v4 = 1;
  ioctlsocket(dword_6FD40104, -2147195266, (u_long *)&v4);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v1 = htonl(0);
  LOWORD(v4) = 2;
  v5 = v1;
  HIWORD(v4) = htons(0x2711u);
  if ( bind(dword_6FD40104, (const struct sockaddr *)&v4, 16) < 0 || (result = listen(dword_6FD40104, 1)) != 0 )
  {
    shutdown(dword_6FD40104, 2);
    closesocket(dword_6FD40104);
    WSACleanup();
LABEL_7:
    result = -1;
  }
  return result;
}
