signed int __cdecl sub_6F833CA0(int a1, int a2)
{
  char v2; // bl@3
  const char *v3; // edx@5
  int v4; // eax@5
  char v5; // bl@10
  char v6; // bl@12
  char v7; // bl@13
  const char *v8; // eax@16
  signed int result; // eax@16
  char v10; // [sp+18h] [bp-90h]@16
  unsigned int v11; // [sp+98h] [bp-10h]@16
  int v12; // [sp+9Ch] [bp-Ch]@2

  if ( a2 )
  {
    v12 = 0;
    do
    {
      v2 = *(_BYTE *)(v12 + a2);
      if ( v2 != sub_6F834C3E()[v12] )
        *(_DWORD *)(a1 + 120) |= 0x20000u;
      v3 = sub_6F834C3E();
      v4 = v12++;
    }
    while ( v3[v4] );
  }
  else
  {
    *(_DWORD *)(a1 + 120) |= 0x20000u;
  }
  if ( !(*(_DWORD *)(a1 + 120) & 0x20000)
    || a2
    && (v5 = *(_BYTE *)a2, v5 == *sub_6F834C3E())
    && (*(_BYTE *)a2 != 49
     || (v6 = *(_BYTE *)(a2 + 2), v6 == sub_6F834C3E()[2]) && (v7 = *(_BYTE *)(a2 + 3), v7 == sub_6F834C3E()[3]))
    && (*(_BYTE *)a2 != 48 || *(_BYTE *)(a2 + 2) > 56) )
  {
    result = 1;
  }
  else
  {
    v11 = 0;
    v11 = sub_6F839081((int)&v10, 0x80u, 0, "Application built with libpng-");
    v11 = sub_6F839081((int)&v10, 0x80u, v11, (_BYTE *)a2);
    v11 = sub_6F839081((int)&v10, 0x80u, v11, " but running with ");
    v8 = sub_6F834C3E();
    v11 = sub_6F839081((int)&v10, 0x80u, v11, v8);
    sub_6F839262(a1, &v10);
    result = 0;
  }
  return result;
}
