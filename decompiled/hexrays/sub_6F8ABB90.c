int __usercall sub_6F8ABB90@<eax>(int a1@<eax>)
{
  int v1; // ebx@1
  __int16 v2; // dx@2
  int v3; // eax@4
  unsigned int v4; // eax@4
  void *v5; // esp@4
  char *v6; // edi@4
  int v7; // eax@4
  char *v8; // esi@5
  int result; // eax@6
  const CHAR **v10; // eax@9
  signed int v11; // eax@9
  int v12; // [sp+0h] [bp-48h]@4
  int *v13; // [sp+8h] [bp-40h]@4
  char v14[12]; // [sp+10h] [bp-38h]@4
  int *v15; // [sp+1Ch] [bp-2Ch]@4
  __int16 v16; // [sp+2Ah] [bp-1Eh]@9
  int v17; // [sp+2Ch] [bp-1Ch]@4

  v1 = a1;
  if ( *(_DWORD *)(a1 + 16) == -3 )
  {
    v17 = 0;
    v10 = (const CHAR **)localeconv();
    v11 = sub_6F8A29A0((WCHAR *)&v16, *v10, 0x10u, &v17);
    if ( v11 <= 0 )
    {
      v2 = *(_WORD *)(v1 + 20);
    }
    else
    {
      v2 = v16;
      *(_WORD *)(v1 + 20) = v16;
    }
    *(_DWORD *)(v1 + 16) = v11;
  }
  else
  {
    v2 = *(_WORD *)(a1 + 20);
  }
  if ( v2 )
  {
    v3 = *(_DWORD *)(v1 + 16);
    v15 = &v12;
    v4 = 16 * ((unsigned int)(v3 + 15) >> 4);
    sub_6F8A13B0(v4, v12);
    v5 = alloca(v4);
    v17 = 0;
    v6 = v14;
    v13 = &v17;
    v7 = sub_6F8A3660(v14, v2);
    if ( v7 <= 0 )
    {
      result = sub_6F8AB850(46, v1);
    }
    else
    {
      v8 = &v14[v7];
      do
        result = sub_6F8AB850(*(++v6 - 1), v1);
      while ( v6 != v8 );
    }
  }
  else
  {
    result = sub_6F8AB850(46, v1);
  }
  return result;
}
