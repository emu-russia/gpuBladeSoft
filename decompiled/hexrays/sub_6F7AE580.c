int __usercall sub_6F7AE580@<eax>(int a1@<eax>, unsigned __int16 a2@<dx>)
{
  unsigned __int16 v2; // si@1
  int v3; // ebx@1
  int result; // eax@2
  bool v5; // zf@5
  int v6; // edi@11
  int v7; // edx@11
  int v8; // ebp@11
  signed __int64 v9; // rax@12
  int v10; // ST2C_4@12
  signed __int64 v11; // rax@12
  int v12; // edi@12
  int v13; // eax@13
  char v14; // dl@17
  int v15; // ebp@18
  int v16; // ebp@19
  int v17; // edx@24
  int v18; // eax@24
  int v19; // edi@31
  signed __int64 v20; // rax@35
  int v21; // [sp+1Ch] [bp-30h]@11
  int v22; // [sp+20h] [bp-2Ch]@11
  int v23; // [sp+24h] [bp-28h]@9

  v2 = a2;
  v3 = a1;
  if ( a2 >= *(_WORD *)(a1 + 80) )
  {
    result = *(_WORD *)(a1 + 284);
    goto LABEL_3;
  }
  result = *(_WORD *)(a1 + 284);
  if ( (unsigned __int16)result < *(_WORD *)(v3 + 44) )
  {
    v23 = *(_DWORD *)(v3 + 308);
    if ( *(_WORD *)(v3 + 344) && *(_WORD *)(v3 + 346) )
    {
      v21 = a2;
      v22 = 8 * a2;
      v6 = *(_DWORD *)(v3 + 56) + 8 * result;
      v7 = *(_DWORD *)(v3 + 220);
      v8 = v22 + *(_DWORD *)(v3 + 92);
      if ( v7 == *(_DWORD *)(v3 + 224) )
      {
        v20 = *(_DWORD *)(v3 + 220)
            * (signed __int64)(*(int (__cdecl **)(int, int, int))(v3 + 576))(
                                v3,
                                *(_DWORD *)v8 - *(_DWORD *)v6,
                                *(_DWORD *)(v8 + 4) - *(_DWORD *)(v6 + 4));
        v12 = (((unsigned __int64)(unsigned int)((SHIDWORD(v20) >> 31) + 0x8000) + v20) >> 32 << 16)
            + ((unsigned int)((SHIDWORD(v20) >> 31) + 0x8000 + v20) >> 16);
      }
      else
      {
        v9 = v7 * (signed __int64)(*(_DWORD *)v8 - *(_DWORD *)v6);
        v10 = (((unsigned __int64)(unsigned int)((SHIDWORD(v9) >> 31) + 0x8000) + v9) >> 32 << 16)
            + ((unsigned int)((SHIDWORD(v9) >> 31) + 0x8000 + v9) >> 16);
        v11 = (unsigned int)(((signed int)((unsigned __int64)(*(_DWORD *)(v3 + 224)
                                                            * (signed __int64)(*(_DWORD *)(v8 + 4) - *(_DWORD *)(v6 + 4))) >> 32) >> 31)
                           + 0x8000)
            + *(_DWORD *)(v3 + 224) * (signed __int64)(*(_DWORD *)(v8 + 4) - *(_DWORD *)(v6 + 4));
        v12 = (*(int (__cdecl **)(int, int, unsigned int))(v3 + 576))(
                v3,
                v10,
                (HIDWORD(v11) << 16) + ((unsigned int)v11 >> 16));
      }
    }
    else
    {
      v21 = a2;
      v22 = 8 * a2;
      v12 = (*(int (__cdecl **)(int, int, int))(v3 + 576))(
              v3,
              *(_DWORD *)(v22 + *(_DWORD *)(v3 + 84)) - *(_DWORD *)(*(_DWORD *)(v3 + 48) + 8 * result),
              *(_DWORD *)(v22 + *(_DWORD *)(v3 + 84) + 4) - *(_DWORD *)(*(_DWORD *)(v3 + 48) + 8 * result + 4));
    }
    v13 = *(_DWORD *)(v3 + 328);
    if ( (((v12 - v13) >> 31) ^ (v12 - v13)) - ((v12 - v13) >> 31) < *(_DWORD *)(v3 + 324) )
    {
      if ( v12 < 0 )
        v13 = -v13;
      v12 = v13;
    }
    v14 = *(_BYTE *)(v3 + 368);
    if ( v14 & 4 )
    {
      v16 = (*(int (__cdecl **)(int, int, _DWORD))(v3 + 568))(v3, v12, *(_DWORD *)(v3 + 4 * (v14 & 3) + 264));
      if ( !(*(_BYTE *)(v3 + 368) & 8) )
      {
LABEL_24:
        v17 = *(_DWORD *)(v3 + 52) + 8 * *(_WORD *)(v3 + 284);
        v18 = (*(int (__cdecl **)(int, int, int))(v3 + 572))(
                v3,
                *(_DWORD *)(*(_DWORD *)(v3 + 88) + v22) - *(_DWORD *)v17,
                *(_DWORD *)(*(_DWORD *)(v3 + 88) + v22 + 4) - *(_DWORD *)(v17 + 4));
        (*(void (__cdecl **)(int, int, int, int))(v3 + 584))(v3, v3 + 72, v21, v16 - v18);
        result = *(_WORD *)(v3 + 284);
        goto LABEL_5;
      }
      if ( v12 >= 0 )
      {
LABEL_22:
        if ( v16 < v23 )
          v16 = v23;
        goto LABEL_24;
      }
    }
    else
    {
      v15 = *(_DWORD *)(v3 + 4 * (v14 & 3) + 264);
      if ( v12 >= 0 )
      {
        v16 = v12 + v15;
        if ( v16 < 0 )
          v16 = 0;
        if ( !(*(_BYTE *)(v3 + 368) & 8) )
          goto LABEL_24;
        goto LABEL_22;
      }
      v19 = v12 - v15;
      v16 = 0;
      if ( v19 <= 0 )
        v16 = v19;
      if ( !(*(_BYTE *)(v3 + 368) & 8) )
        goto LABEL_24;
    }
    if ( v16 > -v23 )
      v16 = -v23;
    goto LABEL_24;
  }
LABEL_3:
  if ( *(_BYTE *)(v3 + 561) )
    *(_DWORD *)(v3 + 12) = 134;
LABEL_5:
  v5 = (*(_BYTE *)(v3 + 368) & 0x10) == 0;
  *(_WORD *)(v3 + 286) = result;
  *(_WORD *)(v3 + 288) = v2;
  if ( !v5 )
    *(_WORD *)(v3 + 284) = v2;
  return result;
}
