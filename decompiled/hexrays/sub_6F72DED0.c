int __usercall sub_6F72DED0@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // edi@1
  int v3; // ebp@1
  int result; // eax@1
  int v5; // ebx@6
  int *v6; // ebp@7
  unsigned int v7; // edi@7
  unsigned int v8; // esi@9
  size_t v9; // ecx@9
  int *v10; // ecx@15
  int v11; // ebp@15
  unsigned int v12; // ebx@16
  size_t v13; // eax@16
  int *v14; // ST28_4@19
  int v15; // esi@24
  signed int v16; // eax@24
  signed int v17; // ecx@24
  int v18; // eax@24
  const void *v19; // [sp+1Ch] [bp-30h]@7
  int v20; // [sp+20h] [bp-2Ch]@1
  int v21; // [sp+24h] [bp-28h]@1
  int v22; // [sp+28h] [bp-24h]@7
  signed int v23; // [sp+2Ch] [bp-20h]@7

  v2 = a2;
  v3 = (unsigned __int8)byte_6FBB5050;
  v21 = a1;
  v20 = (unsigned __int8)byte_6FBB5054;
  sub_6F6969F0(
    (unsigned __int8)byte_6FBB5050,
    (unsigned __int8)byte_6FBB5054,
    a1,
    (int (__cdecl *)(int, int))(unsigned __int8)byte_6FBB5050,
    a2);
  result = HIDWORD(qword_6FBB554C);
  if ( HIDWORD(qword_6FBB554C) )
  {
    if ( BYTE2(dword_6FBBDBA8) != -1 )
    {
      v3 = 0;
      v21 = BYTE2(dword_6FBBDBA8) + 1;
    }
    if ( BYTE3(dword_6FBBDBA8) != -1 )
    {
      v20 = 0;
      v2 = BYTE3(dword_6FBBDBA8) + 1;
    }
    v5 = dword_6FBBD7E4;
    if ( dword_6FBBD7E4 )
    {
      v22 = v3;
      v23 = v2;
      v6 = &dword_6FBBD7E0;
      v19 = (const void *)dword_6FBBD7C4;
      v7 = dword_6FBBD7C8;
      do
      {
        while ( 1 )
        {
          v8 = *(_DWORD *)(v5 + 20);
          v9 = v7;
          if ( v8 <= v7 )
            v9 = *(_DWORD *)(v5 + 20);
          if ( !v9 || (result = memcmp(*(const void **)(v5 + 16), v19, v9)) == 0 )
            result = v8 - v7;
          if ( result < 0 )
            break;
          v6 = (int *)v5;
          v5 = *(_DWORD *)(v5 + 8);
          if ( !v5 )
            goto LABEL_15;
        }
        v5 = *(_DWORD *)(v5 + 12);
      }
      while ( v5 );
LABEL_15:
      v10 = v6;
      v11 = v22;
      if ( v10 != &dword_6FBBD7E0 )
      {
        v12 = v10[5];
        v13 = v10[5];
        if ( v7 <= v12 )
          v13 = v7;
        if ( !v13 || (v14 = v10, result = memcmp(v19, (const void *)v10[4], v13), v10 = v14, !result) )
          result = v7 - v12;
        if ( result >= 0 )
        {
          v15 = v10[10];
          v16 = *(_DWORD *)v15;
          v17 = *(_DWORD *)(v15 + 4);
          dword_6FBBFE44 = sub_6F693A70;
          dword_6FBBFE40 = sub_6F693A70;
          dword_6FD40008 = v16;
          v18 = v16 / v21;
          dword_6FD40004 = v17;
          dword_6FBBFE48 = sub_6F693A70;
          dword_6F96D010 = v18;
          dword_6FD40010 = v18 * v11;
          dword_6FD40000 = *(_DWORD *)(v15 + 8);
          dword_6F96D00C = v17 / v23;
          result = v20 * (v17 / v23);
          dword_6FD4000C = v20 * (v17 / v23);
        }
      }
    }
  }
  return result;
}
