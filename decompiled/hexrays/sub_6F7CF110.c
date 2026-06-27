signed int __cdecl sub_6F7CF110(int a1, int a2)
{
  signed int v2; // ebx@3
  char v3; // al@9
  char v4; // al@11
  unsigned int v5; // eax@18
  int v6; // edi@18
  int v7; // eax@19
  signed int v8; // eax@19
  signed int result; // eax@23
  char v10; // al@24
  int v11; // eax@29
  _DWORD *v12; // eax@29
  int v13; // ebx@30
  _DWORD *v14; // ecx@30
  int v15; // ST00_4@31
  int v16; // eax@31
  _DWORD *v17; // ecx@31
  int v18; // eax@32
  int v19; // edx@33
  bool v20; // cf@34
  int v21; // ebx@34
  int v22; // eax@34
  int v23; // eax@38
  int (__cdecl *v24)(_DWORD, _DWORD, _DWORD); // eax@38
  int v25; // eax@39
  signed int v26; // eax@42
  int v27; // ebx@42
  unsigned __int32 v28; // eax@44
  char *v29; // eax@46
  int v30; // ebp@46
  int v31; // eax@47
  char v32; // al@58
  int v33; // ST18_4@62
  char v34; // al@63
  unsigned __int16 v35; // ax@67
  int v36; // ST04_4@71
  int v37; // ST00_4@71
  int v38; // ST00_4@72
  char v39; // al@77
  unsigned __int16 v40; // dx@79
  int v41; // [sp+14h] [bp-38h]@3
  _DWORD *v42; // [sp+18h] [bp-34h]@30
  unsigned int v43; // [sp+18h] [bp-34h]@42
  size_t v44; // [sp+1Ch] [bp-30h]@44
  int v45; // [sp+24h] [bp-28h]@17
  int v46; // [sp+28h] [bp-24h]@3
  int v47; // [sp+2Ch] [bp-20h]@4

  if ( !a1 || !a2 )
    return 40;
  v41 = *(_DWORD *)(a2 + 28);
  v2 = sub_6F771FF0(a2, 0);
  v46 = v2;
  if ( v2 )
    return v2;
  v2 = sub_6F7720B0(a2, &v47, 4u);
  v46 = v2;
  if ( v2 )
    return v2;
  v2 = 3;
  if ( (_BYTE)v47 != 31 || BYTE1(v47) != -117 || BYTE2(v47) != 8 || BYTE3(v47) & 0xE0 )
    return v2;
  v46 = sub_6F772040(a2, 6);
  v3 = BYTE3(v47);
  if ( BYTE3(v47) & 4 )
  {
    v35 = sub_6F7726B0(a2, &v46);
    v2 = v46;
    if ( v46 )
      return v2;
    v2 = sub_6F772040(a2, v35);
    v46 = v2;
    if ( v2 )
      return v2;
    v3 = BYTE3(v47);
  }
  if ( v3 & 8 )
  {
    while ( 1 )
    {
      v4 = sub_6F7725A0(a2, &v46);
      v2 = v46;
      if ( v46 )
        return v2;
      if ( !v4 )
      {
        v3 = BYTE3(v47);
        break;
      }
    }
  }
  if ( v3 & 0x10 )
  {
    while ( 1 )
    {
      v34 = sub_6F7725A0(a2, &v46);
      v2 = v46;
      if ( v46 )
        return v2;
      if ( !v34 )
      {
        if ( BYTE3(v47) & 2 )
          goto LABEL_16;
        v45 = 0;
        goto LABEL_18;
      }
    }
  }
  if ( v3 & 2 )
LABEL_16:
    v46 = sub_6F772040(a2, 2);
  v2 = v46;
  v45 = v46;
  if ( v46 )
    return v2;
LABEL_18:
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 36) = 0;
  memset((void *)((a1 + 4) & 0xFFFFFFFC), 0, 4 * ((a1 - ((a1 + 4) & 0xFFFFFFFC) + 40) >> 2));
  *(_DWORD *)(a1 + 28) = v41;
  v5 = sub_6F773AE0(v41, 0x2054u, &v45);
  v6 = v5;
  if ( !v45 )
  {
    *(_DWORD *)(v5 + 4) = a1;
    *(_DWORD *)v5 = a2;
    v7 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(v6 + 8264) = 0;
    *(_DWORD *)(v6 + 8) = v7;
    *(_DWORD *)(v6 + 8272) = v6 + 8264;
    *(_DWORD *)(v6 + 8268) = v6 + 8264;
    v8 = sub_6F771FF0(a2, 0);
    v46 = v8;
    if ( v8 )
      goto LABEL_20;
    v8 = sub_6F7720B0(a2, &v47, 4u);
    v46 = v8;
    if ( v8 )
      goto LABEL_20;
    v8 = 3;
    if ( (_BYTE)v47 != 31 || BYTE1(v47) != -117 || BYTE2(v47) != 8 || BYTE3(v47) & 0xE0 )
      goto LABEL_20;
    v46 = sub_6F772040(a2, 6);
    v10 = BYTE3(v47);
    if ( BYTE3(v47) & 4 )
    {
      v40 = sub_6F7726B0(a2, &v46);
      v8 = v46;
      if ( v46 )
        goto LABEL_20;
      v8 = sub_6F772040(a2, v40);
      v46 = v8;
      if ( v8 )
        goto LABEL_20;
      v10 = BYTE3(v47);
    }
    if ( v10 & 8 )
    {
      while ( 1 )
      {
        v32 = sub_6F7725A0(a2, &v46);
        if ( v46 )
          break;
        if ( !v32 )
        {
          v10 = BYTE3(v47);
          goto LABEL_25;
        }
      }
      v8 = v46;
      goto LABEL_20;
    }
LABEL_25:
    if ( v10 & 0x10 )
    {
      do
      {
        v39 = sub_6F7725A0(a2, &v46);
        if ( v46 )
        {
          v8 = v46;
          goto LABEL_20;
        }
      }
      while ( v39 );
      if ( !(BYTE3(v47) & 2) )
        goto LABEL_29;
    }
    else if ( !(v10 & 2) )
    {
      goto LABEL_28;
    }
    v46 = sub_6F772040(a2, 2);
LABEL_28:
    v8 = v46;
    if ( v46 )
      goto LABEL_20;
LABEL_29:
    *(_DWORD *)(v6 + 68) = sub_6F7720A0(a2);
    v11 = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(v6 + 44) = sub_6F7CBDD0;
    *(_DWORD *)(v6 + 48) = sub_6F7CBF80;
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 12) = v6 + 4168;
    *(_DWORD *)(v6 + 52) = v11;
    *(_DWORD *)(v6 + 36) = 0;
    v12 = sub_6F7CBDD0(v11, 1, 24);
    *(_DWORD *)(v6 + 40) = v12;
    if ( v12 )
    {
      v12[5] = 0;
      v12[3] = 1;
      v12[4] = 15;
      v42 = v12;
      v13 = (*(int (__cdecl **)(_DWORD, signed int, signed int))(v6 + 44))(*(_DWORD *)(v6 + 52), 1, 64);
      v14 = v42;
      if ( v13 )
      {
        v15 = *(_DWORD *)(v6 + 52);
        v16 = (*(int (__thiscall **)(_DWORD *))(v6 + 44))(v42);
        *(_DWORD *)(v13 + 36) = v16;
        v17 = v42;
        if ( v16 )
        {
          v18 = (*(int (__cdecl **)(_DWORD, signed int, signed int))(v6 + 44))(*(_DWORD *)(v6 + 52), 1, 0x8000);
          *(_DWORD *)(v13 + 40) = v18;
          if ( v18 )
          {
            *(_DWORD *)(v13 + 56) = 0;
            *(_DWORD *)v13 = 0;
            *(_DWORD *)(v13 + 28) = 0;
            *(_DWORD *)(v13 + 32) = 0;
            *(_DWORD *)(v13 + 44) = v18 + 0x8000;
            v19 = *(_DWORD *)(v6 + 40);
            *(_DWORD *)(v13 + 52) = v18;
            *(_DWORD *)(v13 + 48) = v18;
            v42[5] = v13;
            if ( v19 )
            {
              v20 = *(_DWORD *)(v19 + 12) < 1u;
              v21 = *(_DWORD *)(v19 + 20);
              *(_DWORD *)(v6 + 32) = 0;
              *(_DWORD *)(v6 + 20) = 0;
              *(_DWORD *)(v6 + 36) = 0;
              *(_DWORD *)v19 = ~-v20 & 7;
              v22 = *(_DWORD *)v21;
              if ( (unsigned int)(*(_DWORD *)v21 - 4) <= 1 )
              {
                (*(void (__cdecl **)(_DWORD, _DWORD))(v6 + 48))(*(_DWORD *)(v6 + 52), *(_DWORD *)(v21 + 12));
                v22 = *(_DWORD *)v21;
              }
              if ( v22 == 6 )
                (*(void (__cdecl **)(_DWORD, _DWORD))(v6 + 48))(*(_DWORD *)(v6 + 52), *(_DWORD *)(v21 + 4));
              v23 = *(_DWORD *)(v21 + 40);
              *(_DWORD *)v21 = 0;
              *(_DWORD *)(v21 + 28) = 0;
              *(_DWORD *)(v21 + 32) = 0;
              *(_DWORD *)(v21 + 52) = v23;
              *(_DWORD *)(v21 + 48) = v23;
              v24 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD))(v21 + 56);
              if ( v24 )
              {
                v25 = v24(0, 0, 0);
                *(_DWORD *)(v21 + 60) = v25;
                *(_DWORD *)(v6 + 60) = v25;
              }
            }
            if ( *(_DWORD *)(v6 + 12) )
            {
              v45 = 0;
              *(_DWORD *)(a1 + 12) = v6;
              goto LABEL_42;
            }
            v8 = 3;
LABEL_20:
            v45 = v8;
LABEL_21:
            sub_6F773D90(v41, v6);
            return v45;
          }
          v36 = *(_DWORD *)(v13 + 36);
          v37 = *(_DWORD *)(v6 + 52);
          (*(void (__thiscall **)(_DWORD *))(v6 + 48))(v42);
        }
        v38 = *(_DWORD *)(v6 + 52);
        (*(void (__thiscall **)(_DWORD *))(v6 + 48))(v17);
        v14 = v42;
      }
      v14[5] = 0;
      sub_6F7CBF90(v6 + 12);
    }
    v45 = 3;
    goto LABEL_21;
  }
LABEL_42:
  v43 = *(_DWORD *)(a2 + 8);
  v26 = sub_6F771FF0(a2, *(_DWORD *)(a2 + 4) - 4);
  v27 = v45;
  if ( v26 )
    goto LABEL_43;
  v28 = sub_6F7727E0(a2, &v47);
  v27 = v47;
  v44 = v28;
  if ( v47 )
  {
    sub_6F771FF0(a2, v43);
    goto LABEL_61;
  }
  sub_6F771FF0(a2, v43);
  if ( v44 - 1 > 0x9FFE )
  {
LABEL_61:
    v27 = v45;
    goto LABEL_43;
  }
  v29 = (char *)sub_6F773A50(v41, v44, &v45);
  v30 = (int)v29;
  if ( !v45 )
  {
    v31 = sub_6F7CEEF0(v6, 0, v29, v44);
    if ( v31 == v44 )
    {
      v33 = v31;
      sub_6F7CBF90(v6 + 12);
      *(_DWORD *)(v6 + 44) = 0;
      *(_DWORD *)(v6 + 48) = 0;
      *(_DWORD *)(v6 + 52) = 0;
      *(_DWORD *)(v6 + 12) = 0;
      *(_DWORD *)(v6 + 24) = 0;
      *(_DWORD *)(v6 + 16) = 0;
      *(_DWORD *)(v6 + 28) = 0;
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)v6 = 0;
      *(_DWORD *)(v6 + 4) = 0;
      sub_6F773D90(v41, v6);
      *(_DWORD *)(a1 + 12) = 0;
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)a1 = v30;
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 24) = sub_6F7CC0B0;
      *(_DWORD *)(a1 + 4) = v33;
      return v45;
    }
    sub_6F7CEEF0(v6, 0, 0, 0);
    sub_6F773D90(v41, v30);
  }
LABEL_43:
  *(_DWORD *)(a1 + 4) = 0x7FFFFFFF;
  *(_DWORD *)(a1 + 8) = 0;
  result = v27;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 20) = sub_6F7CF0F0;
  *(_DWORD *)(a1 + 24) = sub_6F7CC0B0;
  return result;
}
