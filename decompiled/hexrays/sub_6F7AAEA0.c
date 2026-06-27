int __usercall sub_6F7AAEA0@<eax>(int a1@<eax>)
{
  int v1; // ebp@1
  int v2; // edx@1
  int v3; // eax@3
  int result; // eax@6
  int v5; // eax@10
  int v6; // eax@11
  int v7; // edi@11
  int v8; // eax@11
  int v9; // ecx@14
  unsigned int v10; // edi@14
  int v11; // eax@18
  int v12; // edi@18
  int v13; // eax@18
  int v14; // edx@21
  int v15; // esi@21
  int v16; // ebx@22
  signed __int64 v17; // rax@22
  int v18; // ST28_4@22
  signed __int64 v19; // rax@22
  int v20; // ebx@22
  int v21; // esi@23
  int v22; // edx@28
  int v23; // edx@31
  int v24; // esi@31
  int v25; // edi@32
  signed __int64 v26; // rax@32
  int v27; // ebx@32
  signed __int64 v28; // rax@32
  int v29; // edx@33
  int v30; // eax@33
  int v31; // [sp+10h] [bp-3Ch]@11
  int v32; // [sp+14h] [bp-38h]@11
  signed int v33; // [sp+18h] [bp-34h]@12
  signed int v34; // [sp+24h] [bp-28h]@12
  signed int v35; // [sp+2Ch] [bp-20h]@12

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 304);
  if ( *(_DWORD *)(a1 + 16) < v2 )
    goto LABEL_4;
  if ( *(_WORD *)(a1 + 344) && *(_WORD *)(a1 + 346) && *(_WORD *)(a1 + 348) )
  {
    v5 = *(_WORD *)(a1 + 286);
    if ( (unsigned __int16)v5 < *(_WORD *)(v1 + 44) )
    {
      v6 = 8 * v5;
      v7 = v6 + *(_DWORD *)(v1 + 56);
      v31 = v6 + *(_DWORD *)(v1 + 56);
      v32 = *(_DWORD *)(v1 + 52) + v6;
      v8 = *(_WORD *)(v1 + 288);
      if ( *(_WORD *)(v1 + 80) <= (unsigned __int16)v8 )
      {
        v33 = 0;
        v35 = 0;
        v34 = 0;
        goto LABEL_13;
      }
      v23 = *(_DWORD *)(v1 + 220);
      v24 = *(_DWORD *)(v1 + 224);
      if ( v23 == v24 )
      {
        v33 = 0;
        v34 = (*(int (__cdecl **)(int, int, int))(v1 + 576))(
                v1,
                *(_DWORD *)(*(_DWORD *)(v1 + 92) + 8 * v8) - *(_DWORD *)v7,
                *(_DWORD *)(*(_DWORD *)(v1 + 92) + 8 * v8 + 4) - *(_DWORD *)(v7 + 4));
      }
      else
      {
        v25 = *(_DWORD *)(v1 + 92) + 8 * v8;
        v26 = v23 * (signed __int64)(*(_DWORD *)v25 - *(_DWORD *)v31);
        v27 = (((unsigned __int64)(unsigned int)((SHIDWORD(v26) >> 31) + 0x8000) + v26) >> 32 << 16)
            + ((unsigned int)((SHIDWORD(v26) >> 31) + 0x8000 + v26) >> 16);
        v28 = (unsigned int)(((signed int)((unsigned __int64)(v24
                                                            * (signed __int64)(*(_DWORD *)(v25 + 4)
                                                                             - *(_DWORD *)(v31 + 4))) >> 32) >> 31)
                           + 0x8000)
            + v24 * (signed __int64)(*(_DWORD *)(v25 + 4) - *(_DWORD *)(v31 + 4));
        v33 = 0;
        v34 = (*(int (__cdecl **)(int, int, unsigned int))(v1 + 576))(
                v1,
                v27,
                (HIDWORD(v28) << 16) + ((unsigned int)v28 >> 16));
      }
      goto LABEL_33;
    }
LABEL_4:
    if ( *(_BYTE *)(v1 + 561) )
      *(_DWORD *)(v1 + 12) = 134;
    result = *(_DWORD *)(v1 + 28);
    goto LABEL_7;
  }
  v3 = *(_WORD *)(a1 + 286);
  if ( *(_WORD *)(v1 + 44) <= (unsigned __int16)v3 )
    goto LABEL_4;
  v11 = 8 * v3;
  v12 = v11 + *(_DWORD *)(v1 + 48);
  v31 = v11 + *(_DWORD *)(v1 + 48);
  v32 = *(_DWORD *)(v1 + 52) + v11;
  v13 = *(_WORD *)(v1 + 288);
  if ( *(_WORD *)(v1 + 80) <= (unsigned __int16)v13 )
  {
    v33 = 1;
    v35 = 0;
    v34 = 0;
    goto LABEL_13;
  }
  v33 = 1;
  v34 = (*(int (__cdecl **)(int, int, int))(v1 + 576))(
          v1,
          *(_DWORD *)(*(_DWORD *)(v1 + 84) + 8 * v13) - *(_DWORD *)v12,
          *(_DWORD *)(*(_DWORD *)(v1 + 84) + 8 * v13 + 4) - *(_DWORD *)(v12 + 4));
LABEL_33:
  v29 = *(_DWORD *)(v1 + 88) + 8 * *(_WORD *)(v1 + 288);
  v30 = (*(int (__cdecl **)(int, int, int))(v1 + 572))(
          v1,
          *(_DWORD *)v29 - *(_DWORD *)v32,
          *(_DWORD *)(v29 + 4) - *(_DWORD *)(v32 + 4));
  v2 = *(_DWORD *)(v1 + 304);
  v35 = v30;
LABEL_13:
  result = *(_DWORD *)(v1 + 28);
  if ( v2 <= 0 )
  {
LABEL_7:
    *(_DWORD *)(v1 + 304) = 1;
    *(_DWORD *)(v1 + 32) = result;
    return result;
  }
  while ( 1 )
  {
    v9 = *(_DWORD *)(v1 + 24);
    *(_DWORD *)(v1 + 28) = --result;
    v10 = *(_DWORD *)(v9 + 4 * result);
    if ( v10 < *(_WORD *)(v1 + 116) )
    {
      if ( v33 )
      {
        v15 = 8 * v10;
        v22 = 8 * v10 + *(_DWORD *)(v1 + 120);
      }
      else
      {
        v14 = *(_DWORD *)(v1 + 220);
        v15 = 8 * v10;
        if ( v14 != *(_DWORD *)(v1 + 224) )
        {
          v16 = v15 + *(_DWORD *)(v1 + 128);
          v17 = v14 * (signed __int64)(*(_DWORD *)v16 - *(_DWORD *)v31);
          v18 = (((unsigned __int64)(unsigned int)((SHIDWORD(v17) >> 31) + 0x8000) + v17) >> 32 << 16)
              + ((unsigned int)((SHIDWORD(v17) >> 31) + 0x8000 + v17) >> 16);
          v19 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(v1 + 224)
                                                              * (signed __int64)(*(_DWORD *)(v16 + 4)
                                                                               - *(_DWORD *)(v31 + 4))) >> 32) >> 31)
                             + 0x8000)
              + *(_DWORD *)(v1 + 224) * (signed __int64)(*(_DWORD *)(v16 + 4) - *(_DWORD *)(v31 + 4));
          v20 = (*(int (__cdecl **)(int, int, unsigned int))(v1 + 576))(
                  v1,
                  v18,
                  (HIDWORD(v19) << 16) + ((unsigned int)v19 >> 16));
          goto LABEL_23;
        }
        v22 = v15 + *(_DWORD *)(v1 + 128);
      }
      v20 = (*(int (__cdecl **)(int, int, int))(v1 + 576))(
              v1,
              *(_DWORD *)v22 - *(_DWORD *)v31,
              *(_DWORD *)(v22 + 4) - *(_DWORD *)(v31 + 4));
LABEL_23:
      v21 = (*(int (__cdecl **)(int, int, int))(v1 + 572))(
              v1,
              *(_DWORD *)(*(_DWORD *)(v1 + 124) + v15) - *(_DWORD *)v32,
              *(_DWORD *)(*(_DWORD *)(v1 + 124) + v15 + 4) - *(_DWORD *)(v32 + 4));
      if ( v20 && v34 )
        v20 = sub_6F7C9420(v20, v35, v34);
      (*(void (__cdecl **)(int, int, _DWORD, int))(v1 + 584))(v1, v1 + 108, (unsigned __int16)v10, v20 - v21);
      result = *(_DWORD *)(v1 + 28);
      v2 = *(_DWORD *)(v1 + 304);
      goto LABEL_16;
    }
    if ( *(_BYTE *)(v1 + 561) )
      break;
LABEL_16:
    *(_DWORD *)(v1 + 304) = --v2;
    if ( v2 <= 0 )
      goto LABEL_7;
  }
  *(_DWORD *)(v1 + 12) = 134;
  return result;
}
