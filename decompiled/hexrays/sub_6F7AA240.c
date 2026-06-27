int __usercall sub_6F7AA240@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx@1
  int v3; // esi@1
  int v4; // ecx@2
  int result; // eax@3
  bool v6; // zf@6
  int v7; // ST2C_4@10
  int v8; // edi@11
  int v9; // ecx@14
  int v10; // edx@14
  int v11; // ecx@14
  int v12; // ebp@15
  int v13; // edx@15
  int v14; // ecx@15
  char v15; // dl@18
  int v16; // ST08_4@21
  int v17; // eax@21
  int v18; // eax@27
  bool v19; // sf@28
  int v20; // edi@28
  int v21; // ebp@31
  int v22; // ST1C_4@31
  int v23; // ST18_4@31
  int v24; // eax@31
  int v25; // edx@31
  int v26; // eax@31
  int v27; // edx@31
  int v28; // eax@31
  int v29; // ecx@31
  int v30; // edi@35
  int v31; // eax@38
  int v32; // edx@38
  int v33; // [sp+18h] [bp-34h]@15
  int v34; // [sp+20h] [bp-2Ch]@14
  int v35; // [sp+24h] [bp-28h]@14
  int v36; // [sp+28h] [bp-24h]@10

  v2 = a1;
  v3 = *(_DWORD *)a2;
  if ( (unsigned __int16)*(_DWORD *)a2 >= *(_WORD *)(a1 + 80)
    || (v4 = *(_DWORD *)(a2 + 4), v4 + 1 >= (unsigned int)(*(_DWORD *)(a1 + 380) + 1)) )
  {
    result = *(_WORD *)(a1 + 284);
    goto LABEL_4;
  }
  result = *(_WORD *)(a1 + 284);
  if ( (unsigned __int16)result >= *(_WORD *)(v2 + 44) )
  {
LABEL_4:
    if ( *(_BYTE *)(v2 + 561) )
      *(_DWORD *)(v2 + 12) = 134;
    goto LABEL_6;
  }
  v36 = *(_DWORD *)(v2 + 308);
  v7 = *(_DWORD *)(v2 + 320);
  if ( v4 == -1 )
  {
    v8 = *(_DWORD *)(v2 + 328);
    if ( *(_DWORD *)(v2 + 324) <= (v8 ^ (*(_DWORD *)(v2 + 328) >> 31)) - (*(_DWORD *)(v2 + 328) >> 31) )
      v8 = 0;
    goto LABEL_13;
  }
  v31 = (*(int (__cdecl **)(int, int))(v2 + 596))(v2, v4);
  v32 = *(_DWORD *)(v2 + 328);
  v8 = v31;
  if ( (((v31 - v32) >> 31) ^ (v31 - v32)) - ((v31 - v32) >> 31) < *(_DWORD *)(v2 + 324) )
  {
    if ( v31 >= 0 )
    {
      result = *(_WORD *)(v2 + 284);
      v8 = *(_DWORD *)(v2 + 328);
      goto LABEL_13;
    }
    v8 = -v32;
  }
  result = *(_WORD *)(v2 + 284);
LABEL_13:
  if ( *(_WORD *)(v2 + 346) )
  {
    v34 = (unsigned __int16)v3;
    v9 = 8 * (unsigned __int16)v3;
    v35 = v9;
    v10 = v9 + *(_DWORD *)(v2 + 84);
    v11 = *(_DWORD *)(v2 + 48) + 8 * result;
  }
  else
  {
    v21 = (unsigned __int16)v3;
    v34 = (unsigned __int16)v3;
    v35 = 8 * (unsigned __int16)v3;
    v22 = *(_DWORD *)(v2 + 48) + 8 * result;
    v23 = *(_DWORD *)(v2 + 84) + v35;
    v24 = sub_6F7A9D10(v8, *(_WORD *)(v2 + 298));
    v25 = *(_WORD *)(v2 + 300);
    *(_DWORD *)v23 = *(_DWORD *)v22 + v24;
    v26 = sub_6F7A9D10(v8, v25);
    v27 = *(_DWORD *)v23;
    *(_DWORD *)(v23 + 4) = *(_DWORD *)(v22 + 4) + v26;
    v28 = *(_DWORD *)(v2 + 88);
    v29 = *(_DWORD *)(v23 + 4);
    *(_DWORD *)(v28 + 8 * v21) = v27;
    v10 = v23;
    *(_DWORD *)(v28 + 8 * v21 + 4) = v29;
    v11 = v22;
  }
  v12 = (*(int (__cdecl **)(int, int, int))(v2 + 576))(
          v2,
          *(_DWORD *)v10 - *(_DWORD *)v11,
          *(_DWORD *)(v10 + 4) - *(_DWORD *)(v11 + 4));
  v13 = *(_DWORD *)(v2 + 52) + 8 * *(_WORD *)(v2 + 284);
  v33 = (*(int (__cdecl **)(int, int, int))(v2 + 572))(
          v2,
          *(_DWORD *)(*(_DWORD *)(v2 + 88) + v35) - *(_DWORD *)v13,
          *(_DWORD *)(*(_DWORD *)(v2 + 88) + v35 + 4) - *(_DWORD *)(v13 + 4));
  if ( *(_BYTE *)(v2 + 316) )
  {
    v14 = v12 ^ v8;
    if ( (v12 ^ v8) < 0 )
      v8 = -v8;
  }
  v15 = *(_BYTE *)(v2 + 368);
  if ( v15 & 4 )
  {
    if ( *(_WORD *)(v2 + 344) == *(_WORD *)(v2 + 346) )
      v14 = (v8 - v12) >> 31;
    v16 = *(_DWORD *)(v2 + 4 * (v15 & 3) + 264);
    v17 = (*(int (__thiscall **)(int))(v2 + 568))(v14);
    v15 = *(_BYTE *)(v2 + 368);
  }
  else
  {
    v18 = *(_DWORD *)(v2 + 4 * (v15 & 3) + 264);
    if ( v8 < 0 )
    {
      v30 = v8 - v18;
      v17 = 0;
      if ( v30 <= 0 )
        v17 = v30;
    }
    else
    {
      v19 = v18 + v8 < 0;
      v20 = v18 + v8;
      v17 = 0;
      if ( !v19 )
        v17 = v20;
    }
  }
  if ( v15 & 8 )
  {
    if ( v12 < 0 )
    {
      if ( v17 > -v36 )
        v17 = -v36;
    }
    else if ( v17 < v36 )
    {
      v17 = v36;
    }
  }
  (*(void (__cdecl **)(int, int, int, int))(v2 + 584))(v2, v2 + 72, v34, v17 - v33);
  result = *(_WORD *)(v2 + 284);
LABEL_6:
  v6 = (*(_BYTE *)(v2 + 368) & 0x10) == 0;
  *(_WORD *)(v2 + 286) = result;
  if ( !v6 )
    *(_WORD *)(v2 + 284) = v3;
  *(_WORD *)(v2 + 288) = v3;
  return result;
}
