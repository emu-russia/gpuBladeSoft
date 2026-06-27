int __usercall sub_6F6976C0@<eax>(int a1@<ebp>)
{
  int v1; // ecx@4
  void *v3; // [sp+1Ch] [bp-50h]@8
  int v4; // [sp+24h] [bp-48h]@4
  int v5; // [sp+28h] [bp-44h]@4
  int v6; // [sp+2Ch] [bp-40h]@4
  const char *v7; // [sp+30h] [bp-3Ch]@4
  void *v8; // [sp+34h] [bp-38h]@4
  void *v9; // [sp+38h] [bp-34h]@4
  int v10; // [sp+3Ch] [bp-30h]@4
  int v11; // [sp+40h] [bp-2Ch]@4
  int v12; // [sp+44h] [bp-28h]@4
  void *v13; // [sp+5Ch] [bp-10h]@4

  if ( dword_6FD40E10 == -1 )
  {
    sub_6F697900(a1, 0, (int)&v3);
LABEL_9:
    sub_6F697340();
    goto LABEL_10;
  }
  if ( !dword_6FD40E10 )
  {
    sub_6F697900(a1, 0, (int)&v3);
    nullsub_10();
    ShowCursor(1);
    goto LABEL_9;
  }
  if ( dword_6FD40E10 != -2 )
    goto LABEL_4;
  sub_6F697900(a1, 0, (int)&v3);
LABEL_10:
  sub_6F732260();
  sub_6F761860(&dword_6FD40974);
  sub_6F761860(&dword_6FD40970);
  sub_6F761860(&dword_6FD4096C);
  sub_6F75A490(&dword_6FD40978);
  sub_6F7616C0();
  sub_6F75A010();
  nullsub_9();
LABEL_4:
  v5 = 64;
  v6 = 0;
  v1 = *(_DWORD *)(dword_6FBB51E8 + 28);
  v9 = &unk_6FB4D5C0;
  v10 = v1;
  v12 = 0;
  v7 = "open";
  v8 = dword_6FCFFEFC;
  v11 = 1;
  v4 = 60;
  ShellExecuteExA((SHELLEXECUTEINFOA *)&v4);
  WaitForSingleObject(v13, 0xFFFFFFFF);
  CloseHandle(v13);
  if ( dword_6FD40E10 == -1 )
  {
    sub_6F6A3A90();
    sub_6F6A8400(a1);
  }
  else if ( dword_6FD40E10 )
  {
    if ( dword_6FD40E10 != -2 )
      return 0;
    sub_6F6A3A90();
  }
  else
  {
    sub_6F6A3A90();
    sub_6F6A8400(a1);
    nullsub_10();
    if ( dword_6FBB8524 )
      ShowCursor(0);
    else
      ShowCursor(1);
  }
  sub_6F697900(a1, 2u, (int)&v3);
  free(v3);
  return 0;
}
