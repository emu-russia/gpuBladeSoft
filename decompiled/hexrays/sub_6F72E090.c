void sub_6F72E090()
{
  signed int v0; // ecx@1
  signed int v1; // ebx@1
  char v2; // al@3
  signed int v3; // ebx@5
  int v4; // esi@7
  int v5; // ebx@13
  int v6; // ebx@22
  unsigned int v7; // edi@23
  int *v8; // esi@23
  unsigned int v9; // ebp@25
  size_t v10; // edx@25
  int v11; // eax@28
  unsigned int v12; // ebx@32
  size_t v13; // eax@32
  int v14; // eax@35
  int v15; // edi@40
  signed int v16; // eax@40
  signed int v17; // ecx@40
  int v18; // [sp+1Ch] [bp-30h]@5
  const void *v19; // [sp+20h] [bp-2Ch]@23
  signed int v20; // [sp+24h] [bp-28h]@15
  int v21; // [sp+28h] [bp-24h]@17
  int v22; // [sp+2Ch] [bp-20h]@23

  v0 = (unsigned __int8)byte_6FBB5051;
  v1 = (unsigned __int8)byte_6FBB5050;
  if ( (unsigned __int8)byte_6FBB5051 <= (unsigned __int8)byte_6FBB5050 )
    v1 = (unsigned __int8)byte_6FBB5051;
  v2 = byte_6FBB5054;
  if ( v1 > (unsigned __int8)byte_6FBB5052 )
    v1 = (unsigned __int8)byte_6FBB5052;
  v18 = v1;
  v3 = (unsigned __int8)byte_6FBB5055;
  if ( (unsigned __int8)byte_6FBB5055 <= (unsigned __int8)byte_6FBB5054 )
    v2 = byte_6FBB5055;
  v4 = (unsigned __int8)v2;
  if ( (unsigned __int8)v2 > (signed int)(unsigned __int8)byte_6FBB5056 )
    v4 = (unsigned __int8)byte_6FBB5056;
  if ( (unsigned __int8)v3 < (unsigned __int8)byte_6FBB5054 )
    v3 = (unsigned __int8)byte_6FBB5054;
  if ( v3 < (unsigned __int8)byte_6FBB5056 )
    v3 = (unsigned __int8)byte_6FBB5056;
  v5 = v3 - v4;
  if ( (unsigned __int8)v0 < (unsigned __int8)byte_6FBB5050 )
    v0 = (unsigned __int8)byte_6FBB5050;
  v20 = v5 + 1;
  if ( v0 < (unsigned __int8)byte_6FBB5052 )
    v0 = (unsigned __int8)byte_6FBB5052;
  v21 = v0 - v18 + 1;
  sub_6F6969F0(v18, v4, v21, (int (__cdecl *)(int, int))(unsigned __int8)byte_6FBB5050, v5 + 1);
  if ( HIDWORD(qword_6FBB554C) )
  {
    if ( BYTE2(dword_6FBBDBA8) != -1 )
    {
      v18 = 0;
      v21 = BYTE2(dword_6FBBDBA8) + 1;
    }
    if ( BYTE3(dword_6FBBDBA8) != -1 )
    {
      v4 = 0;
      v20 = BYTE3(dword_6FBBDBA8) + 1;
    }
    v6 = dword_6FBBD7E4;
    if ( dword_6FBBD7E4 )
    {
      v22 = v4;
      v7 = dword_6FBBD7C8;
      v8 = &dword_6FBBD7E0;
      v19 = (const void *)dword_6FBBD7C4;
      do
      {
        while ( 1 )
        {
          v9 = *(_DWORD *)(v6 + 20);
          v10 = v7;
          if ( v9 <= v7 )
            v10 = *(_DWORD *)(v6 + 20);
          if ( !v10 || (v11 = memcmp(*(const void **)(v6 + 16), v19, v10)) == 0 )
            v11 = v9 - v7;
          if ( v11 < 0 )
            break;
          v8 = (int *)v6;
          v6 = *(_DWORD *)(v6 + 8);
          if ( !v6 )
            goto LABEL_31;
        }
        v6 = *(_DWORD *)(v6 + 12);
      }
      while ( v6 );
LABEL_31:
      if ( v8 != &dword_6FBBD7E0 )
      {
        v12 = v8[5];
        v13 = v8[5];
        if ( v7 <= v12 )
          v13 = v7;
        if ( !v13 || (v14 = memcmp(v19, (const void *)v8[4], v13)) == 0 )
          v14 = v7 - v12;
        if ( v14 >= 0 )
        {
          v15 = v8[10];
          v16 = *(_DWORD *)v15;
          v17 = *(_DWORD *)(v15 + 4);
          dword_6FBBFE44 = sub_6F693A70;
          dword_6FBBFE40 = sub_6F693A70;
          dword_6FD40008 = v16;
          dword_6FD40004 = v17;
          dword_6FBBFE48 = sub_6F693A70;
          dword_6F96D010 = v16 / v21;
          dword_6FD40010 = v18 * (v16 / v21);
          dword_6F96D00C = v17 / v20;
          dword_6FD40000 = *(_DWORD *)(v15 + 8);
          dword_6FD4000C = v22 * (v17 / v20);
        }
      }
    }
  }
}
