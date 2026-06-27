int GPUconfigure()
{
  int v0; // ebx@1
  int v2; // [sp+14h] [bp-48h]@6
  int v3; // [sp+18h] [bp-44h]@6
  int v4; // [sp+1Ch] [bp-40h]@6
  const char *v5; // [sp+20h] [bp-3Ch]@6
  void *v6; // [sp+24h] [bp-38h]@6
  void *v7; // [sp+28h] [bp-34h]@6
  const char *v8; // [sp+2Ch] [bp-30h]@6
  int v9; // [sp+30h] [bp-2Ch]@6
  int v10; // [sp+34h] [bp-28h]@6
  void *v11; // [sp+4Ch] [bp-10h]@6

  v0 = dword_700584C8;
  if ( dword_700584C8 )
  {
    if ( dword_700584C0 )
    {
      if ( !dword_6FB489CC )
      {
        sub_6F733F20();
        if ( !dword_700584C0 )
          goto LABEL_6;
      }
      goto LABEL_4;
    }
LABEL_11:
    v3 = 64;
    v6 = dword_6FCFFEFC;
    v4 = 0;
    v7 = &unk_6FB53053;
    v8 = "plugins";
    v10 = 0;
    v5 = "open";
    v9 = 1;
    v2 = 60;
    ShellExecuteExA((SHELLEXECUTEINFOA *)&v2);
    WaitForSingleObject(v11, 0xFFFFFFFF);
    CloseHandle(v11);
    goto LABEL_12;
  }
  if ( !dword_700584C0 )
    goto LABEL_11;
LABEL_4:
  if ( !dword_6FB489C8 )
    sub_6F732400();
LABEL_6:
  v3 = 64;
  v6 = dword_6FCFFEFC;
  v4 = 0;
  v7 = &unk_6FB53053;
  v8 = "plugins";
  v10 = 0;
  v5 = "open";
  v9 = 1;
  v2 = 60;
  ShellExecuteExA((SHELLEXECUTEINFOA *)&v2);
  WaitForSingleObject(v11, 0xFFFFFFFF);
  CloseHandle(v11);
  if ( !dword_6FB489C8 )
  {
LABEL_12:
    if ( !v0 || !dword_700584C0 )
      return 0;
    goto LABEL_14;
  }
  if ( !dword_700584C0 )
  {
    sub_6F734300();
    goto LABEL_12;
  }
  if ( !v0 )
    return 0;
LABEL_14:
  if ( dword_700584C8 )
    return 0;
  sub_6F733C20();
  return 0;
}
