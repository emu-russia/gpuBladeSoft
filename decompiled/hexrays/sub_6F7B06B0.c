int __cdecl sub_6F7B06B0(int a1, int a2)
{
  int v2; // edx@1
  int v3; // esi@2
  int v4; // edi@5
  int result; // eax@5
  int v6; // edx@7
  int v7; // eax@7
  int v8; // edx@7
  signed int v9; // edx@7
  int v10; // eax@9
  int v11; // edx@9
  bool v12; // zf@9
  unsigned __int16 v13; // si@12
  int v14; // eax@16
  int v15; // edx@18
  int v16; // eax@18
  int v17; // edi@18
  int v18; // edx@18
  unsigned __int16 v19; // dx@18
  signed int v20; // ecx@19
  int v21; // eax@23
  int v22; // ecx@25
  unsigned int v23; // eax@25
  unsigned int v24; // esi@14
  signed __int64 v25; // rax@14
  signed __int64 v26; // rax@14
  signed __int64 v27; // rax@14
  signed __int64 v28; // rax@14
  int v29; // eax@26
  unsigned int v30; // eax@26
  unsigned int v31; // esi@21
  signed __int64 v32; // rax@21
  signed __int64 v33; // rax@21
  signed __int64 v34; // rax@21
  signed __int64 v35; // rax@21
  int v36; // [sp+1Ch] [bp-10h]@2

  v2 = *(_DWORD *)a1;
  if ( !(*(_BYTE *)(*(_DWORD *)a1 + 8) & 2) )
  {
    v3 = 0;
LABEL_5:
    sub_6F76C770(v2, a2);
    v4 = *(_DWORD *)a1;
    result = v3;
    if ( *(_BYTE *)(*(_DWORD *)a1 + 8) & 1 )
    {
      v6 = *(_DWORD *)(a1 + 16);
      v7 = *(_DWORD *)(a1 + 12);
      *(_BYTE *)(a1 + 108) = 0;
      *(_DWORD *)(a1 + 48) = v6;
      v8 = *(_DWORD *)(a1 + 20);
      *(_DWORD *)(a1 + 44) = v7;
      *(_DWORD *)(a1 + 52) = v8;
      *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 28);
      *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 36);
      v9 = (unsigned __int16)v7;
      result = 151;
      if ( (_WORD)v9 )
      {
        v13 = *(_WORD *)(a1 + 46);
        if ( v13 )
        {
          if ( *(_BYTE *)(v4 + 176) & 8 )
          {
            *(_DWORD *)(a1 + 48) = sub_6F7C9760((unsigned __int16)v9 << 6, *(_WORD *)(v4 + 68));
            v24 = sub_6F7C9760(*(_WORD *)(a1 + 46) << 6, *(_WORD *)(v4 + 68));
            *(_DWORD *)(a1 + 52) = v24;
            v25 = (signed int)v24 * (signed __int64)*(_WORD *)(v4 + 70);
            *(_DWORD *)(a1 + 56) = ((((unsigned __int64)(unsigned int)((SHIDWORD(v25) >> 31) + 0x8000) + v25) >> 32 << 16)
                                  + ((unsigned int)((SHIDWORD(v25) >> 31) + 0x8000 + v25) >> 16)
                                  + 32) & 0xFFFFFFC0;
            v26 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v24 * (signed __int64)*(_WORD *)(v4 + 72)) >> 32) >> 31)
                               + 0x8000)
                + (signed int)v24 * (signed __int64)*(_WORD *)(v4 + 72);
            *(_DWORD *)(a1 + 60) = ((HIDWORD(v26) << 16) + ((unsigned int)v26 >> 16) + 32) & 0xFFFFFFC0;
            v27 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v24 * (signed __int64)*(_WORD *)(v4 + 74)) >> 32) >> 31)
                               + 0x8000)
                + (signed int)v24 * (signed __int64)*(_WORD *)(v4 + 74);
            LODWORD(v27) = (HIDWORD(v27) << 16) + ((unsigned int)v27 >> 16) + 32;
            HIDWORD(v27) = *(_DWORD *)(a1 + 48);
            *(_DWORD *)(a1 + 64) = v27 & 0xFFFFFFC0;
            v28 = SHIDWORD(v27) * (signed __int64)*(_WORD *)(v4 + 76);
            LODWORD(v28) = (((unsigned __int64)(unsigned int)((SHIDWORD(v28) >> 31) + 0x8000) + v28) >> 32 << 16)
                         + ((unsigned int)((SHIDWORD(v28) >> 31) + 0x8000 + v28) >> 16)
                         + 32;
            v9 = *(_WORD *)(a1 + 44);
            v13 = *(_WORD *)(a1 + 46);
            *(_DWORD *)(a1 + 68) = v28 & 0xFFFFFFC0;
          }
          if ( v13 > (unsigned __int16)v9 )
          {
            v22 = *(_DWORD *)(a1 + 52);
            *(_WORD *)(a1 + 80) = v13;
            *(_DWORD *)(a1 + 88) = v22;
            v23 = sub_6F7C9760((unsigned __int16)v9, v13);
            *(_DWORD *)(a1 + 76) = 0x10000;
            *(_DWORD *)(a1 + 72) = v23;
          }
          else
          {
            v14 = *(_DWORD *)(a1 + 48);
            *(_WORD *)(a1 + 80) = v9;
            *(_DWORD *)(a1 + 72) = 0x10000;
            *(_DWORD *)(a1 + 88) = v14;
            *(_DWORD *)(a1 + 76) = sub_6F7C9760(v13, v9);
          }
          *(_DWORD *)(a1 + 300) = -1;
          *(_BYTE *)(a1 + 108) = 1;
          result = 0;
        }
      }
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 56);
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 64);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 68);
    }
    return result;
  }
  v3 = (*(int (__cdecl **)(int, int, int *))(*(_DWORD *)(v2 + 532) + 104))(v2, a2, &v36);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 112) = -1;
    v2 = *(_DWORD *)a1;
    goto LABEL_5;
  }
  v10 = *(_DWORD *)a1;
  v11 = v36;
  v12 = (*(_BYTE *)(*(_DWORD *)a1 + 8) & 1) == 0;
  *(_DWORD *)(a1 + 112) = v36;
  if ( v12 )
  {
    result = (*(int (__cdecl **)(int, int, int))(*(_DWORD *)(v10 + 532) + 108))(v10, v11, a1 + 12);
    if ( result )
      *(_DWORD *)(a1 + 112) = -1;
  }
  else
  {
    sub_6F76C670(v10, v11);
    v15 = *(_DWORD *)(a1 + 16);
    v16 = *(_DWORD *)(a1 + 12);
    *(_BYTE *)(a1 + 108) = 0;
    v17 = *(_DWORD *)a1;
    *(_DWORD *)(a1 + 48) = v15;
    v18 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 44) = v16;
    *(_DWORD *)(a1 + 52) = v18;
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a1 + 36);
    v19 = v16;
    result = 0;
    if ( v19 )
    {
      v20 = *(_WORD *)(a1 + 46);
      result = 0;
      if ( (_WORD)v20 )
      {
        if ( *(_BYTE *)(v17 + 176) & 8 )
        {
          *(_DWORD *)(a1 + 48) = sub_6F7C9760(v19 << 6, *(_WORD *)(v17 + 68));
          v31 = sub_6F7C9760(*(_WORD *)(a1 + 46) << 6, *(_WORD *)(v17 + 68));
          *(_DWORD *)(a1 + 52) = v31;
          v32 = (signed int)v31 * (signed __int64)*(_WORD *)(v17 + 70);
          *(_DWORD *)(a1 + 56) = ((((unsigned __int64)(unsigned int)((SHIDWORD(v32) >> 31) + 0x8000) + v32) >> 32 << 16)
                                + ((unsigned int)((SHIDWORD(v32) >> 31) + 0x8000 + v32) >> 16)
                                + 32) & 0xFFFFFFC0;
          v33 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v31 * (signed __int64)*(_WORD *)(v17 + 72)) >> 32) >> 31)
                             + 0x8000)
              + (signed int)v31 * (signed __int64)*(_WORD *)(v17 + 72);
          *(_DWORD *)(a1 + 60) = ((HIDWORD(v33) << 16) + ((unsigned int)v33 >> 16) + 32) & 0xFFFFFFC0;
          v34 = (unsigned int)(((signed int)((unsigned __int64)((signed int)v31 * (signed __int64)*(_WORD *)(v17 + 74)) >> 32) >> 31)
                             + 0x8000)
              + (signed int)v31 * (signed __int64)*(_WORD *)(v17 + 74);
          LODWORD(v34) = (HIDWORD(v34) << 16) + ((unsigned int)v34 >> 16) + 32;
          HIDWORD(v34) = *(_DWORD *)(a1 + 48);
          *(_DWORD *)(a1 + 64) = v34 & 0xFFFFFFC0;
          v35 = SHIDWORD(v34) * (signed __int64)*(_WORD *)(v17 + 76);
          LODWORD(v35) = (((unsigned __int64)(unsigned int)((SHIDWORD(v35) >> 31) + 0x8000) + v35) >> 32 << 16)
                       + ((unsigned int)((SHIDWORD(v35) >> 31) + 0x8000 + v35) >> 16)
                       + 32;
          v19 = *(_WORD *)(a1 + 44);
          v20 = *(_WORD *)(a1 + 46);
          *(_DWORD *)(a1 + 68) = v35 & 0xFFFFFFC0;
        }
        if ( v19 < (unsigned __int16)v20 )
        {
          v29 = *(_DWORD *)(a1 + 52);
          *(_WORD *)(a1 + 80) = v20;
          *(_DWORD *)(a1 + 88) = v29;
          v30 = sub_6F7C9760(v19, v20);
          *(_DWORD *)(a1 + 76) = 0x10000;
          *(_DWORD *)(a1 + 72) = v30;
        }
        else
        {
          v21 = *(_DWORD *)(a1 + 48);
          *(_WORD *)(a1 + 80) = v19;
          *(_DWORD *)(a1 + 72) = 0x10000;
          *(_DWORD *)(a1 + 88) = v21;
          *(_DWORD *)(a1 + 76) = sub_6F7C9760(v20, v19);
        }
        *(_DWORD *)(a1 + 300) = -1;
        *(_BYTE *)(a1 + 108) = 1;
        result = 0;
      }
    }
  }
  return result;
}
