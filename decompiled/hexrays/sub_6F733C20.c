int sub_6F733C20()
{
  _DWORD *v0; // eax@3
  int result; // eax@6
  int v2; // [sp+18h] [bp-14h]@3
  _DWORD *v3; // [sp+1Ch] [bp-10h]@3

  nullsub_10();
  sub_6F6A6B20(*(int **)(dword_6FBB51E8 + 40));
  sub_6F731C50();
  sub_6F733910();
  if ( dword_6FBBFD7C )
  {
    glDeleteTextures(1, (int)&dword_6FBBFD78);
    dword_6FBBFD70 = 0;
    dword_6FBBFD74 = 0;
    dword_6FBBFD78 = 0;
    dword_6FBBFD7C = 0;
  }
  byte_700584CC = 0;
  v2 = 0;
  v0 = sub_6F961B60(8u);
  *v0 = off_6FB53888;
  v0[1] = sub_6F72B640;
  v3 = v0;
  sub_6F9385D0(&v2, (int *)&v3, 0);
  if ( v3 )
    (*(void (**)(void))(*v3 + 4))();
  if ( dword_6FBBFBEC )
    sub_6F95D3C0();
  dword_700584C8 = 1;
  result = v2;
  dword_6FB489CC = 0;
  dword_6FBBFBEC = v2;
  return result;
}
