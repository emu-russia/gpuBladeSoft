unsigned int __cdecl sub_6F8ADD00(int a1, int a2)
{
  int v2; // edi@1
  unsigned int result; // eax@1
  _DWORD *v4; // esi@2
  unsigned int v5; // ebp@2
  int v6; // eax@2
  unsigned int v7; // edi@3
  unsigned __int64 v8; // rax@4
  __int64 v9; // rax@4
  __int64 v10; // rcx@4
  int v11; // ecx@8
  __int64 v12; // rcx@14
  __int64 v13; // rax@15
  int v14; // esi@15
  unsigned __int64 v15; // rax@15
  _DWORD *v16; // eax@16
  int v17; // edx@19
  unsigned int v18; // eax@19
  __int64 v19; // [sp+18h] [bp-54h]@3
  _DWORD *v20; // [sp+18h] [bp-54h]@14
  __int64 v21; // [sp+28h] [bp-44h]@3
  _DWORD *v22; // [sp+30h] [bp-3Ch]@2
  unsigned int v23; // [sp+34h] [bp-38h]@2
  unsigned int v24; // [sp+38h] [bp-34h]@2
  unsigned int v25; // [sp+3Ch] [bp-30h]@2
  int v26; // [sp+40h] [bp-2Ch]@2
  int v27; // [sp+44h] [bp-28h]@1
  unsigned int *v28; // [sp+48h] [bp-24h]@2

  v2 = *(_DWORD *)(a2 + 16);
  result = 0;
  v27 = v2;
  if ( *(_DWORD *)(a1 + 16) >= v2 )
  {
    v4 = (_DWORD *)(a1 + 20);
    v25 = a1 + 20;
    v5 = a2 + 20;
    v26 = v2 - 1;
    v6 = 4 * (v2 - 1);
    v28 = (unsigned int *)(a1 + 20 + v6);
    v22 = (_DWORD *)(a2 + 20 + v6);
    v23 = *v28 / (*v22 + 1);
    v24 = *v28 / (*v22 + 1);
    if ( *v28 >= *v22 + 1 )
    {
      v21 = 0i64;
      v7 = a2 + 20;
      v19 = 0i64;
      do
      {
        v7 += 4;
        v8 = v21 + *(_DWORD *)(v7 - 4) * (unsigned __int64)v23;
        v21 = HIDWORD(v8);
        v9 = v19 + (unsigned int)v8;
        HIDWORD(v19) = 0;
        v10 = *v4 - v9;
        ++v4;
        *(v4 - 1) = v10;
        LODWORD(v19) = BYTE4(v10) & 1;
      }
      while ( (unsigned int)v22 >= v7 );
      v5 = a2 + 20;
      if ( !*v28 )
      {
        if ( v25 < (unsigned int)(v28 - 1) && !*(v28 - 1) )
        {
          v11 = v26;
          do
            --v11;
          while ( v27 - 2 - (((unsigned int)v28 + -a1 - 25) >> 2) != v11 && !*(&v28[v11] - v27) );
          v26 = v11;
        }
        *(_DWORD *)(a1 + 16) = v26;
      }
    }
    if ( sub_6F8B0D70(a1, a2) >= 0 )
    {
      v12 = 0i64;
      v24 = v23 + 1;
      v20 = (_DWORD *)(a1 + 20);
      do
      {
        v5 += 4;
        v13 = *v20 - (v12 + *(_DWORD *)(v5 - 4));
        v14 = *v20 - (v12 + *(_DWORD *)(v5 - 4));
        ++v20;
        v15 = __PAIR__(HIDWORD(v13), (unsigned int)v20) & 0x1FFFFFFFFi64;
        v12 = HIDWORD(v15);
        *(_DWORD *)(v15 - 4) = v14;
      }
      while ( (unsigned int)v22 >= v5 );
      v16 = (_DWORD *)(v25 + 4 * v26);
      if ( !*v16 )
      {
        if ( v25 >= (unsigned int)(v16 - 1) || *(v16 - 1) )
        {
          v18 = v26;
        }
        else
        {
          v17 = v26 - 1;
          v18 = v26 - 1 - (((unsigned int)v16 + -a1 - 25) >> 2);
          while ( v17 != v18 )
          {
            if ( *(_DWORD *)(v25 + 4 * v17 - 4) )
            {
              v18 = v17;
              break;
            }
            --v17;
          }
        }
        *(_DWORD *)(a1 + 16) = v18;
      }
    }
    result = v24;
  }
  return result;
}
