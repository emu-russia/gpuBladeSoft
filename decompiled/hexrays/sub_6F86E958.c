int __cdecl sub_6F86E958(int a1)
{
  int v1; // edx@2
  _BYTE *v2; // ebx@2
  int v3; // eax@2
  int v4; // edi@2
  int j; // esi@3
  char v6; // al@8
  int v7; // ecx@8
  int v8; // eax@15
  int result; // eax@16
  int v10; // eax@17
  int v11; // esi@18
  int i; // edx@19
  int v13; // ebx@23
  _BYTE *v14; // eax@23
  int v15; // eax@23
  int v16; // ST2C_4@24
  _BYTE *v17; // eax@25
  int v18; // eax@25
  int v19; // ST2C_4@26
  int v20; // [sp+28h] [bp-60h]@8
  int v21; // [sp+2Ch] [bp-5Ch]@11
  int v22; // [sp+30h] [bp-58h]@2
  int v23; // [sp+34h] [bp-54h]@2
  unsigned int v24; // [sp+3Ch] [bp-4Ch]@1
  char v25; // [sp+54h] [bp-34h]@2

  v24 = *(_DWORD *)(a1 + 404);
  if ( *(_BYTE *)(a1 + 248) )
  {
    v10 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v24 + 112) = *(_DWORD *)v10;
    *(_DWORD *)(v24 + 116) = *(_DWORD *)(v10 + 4);
    sub_6F86D5EC(v24);
    if ( *(_BYTE *)(v24 + 108) || (v11 = *(_DWORD *)(v24 + 16) + 7, v11 <= 7) )
    {
LABEL_27:
      *(_DWORD *)(v24 + 12) = 0;
      *(_DWORD *)(v24 + 16) = 0;
      result = *(_DWORD *)(a1 + 24);
      *(_DWORD *)result = *(_DWORD *)(v24 + 112);
      *(_DWORD *)(result + 4) = *(_DWORD *)(v24 + 116);
      return result;
    }
    for ( i = *(_DWORD *)(v24 + 12) | (127 << (24 - v11)); ; i <<= 8 )
    {
      v13 = (i >> 16) & 0xFF;
      v14 = *(_BYTE **)(v24 + 112);
      *v14 = i >> 16;
      *(_DWORD *)(v24 + 112) = v14 + 1;
      v15 = *(_DWORD *)(v24 + 116) - 1;
      *(_DWORD *)(v24 + 116) = v15;
      if ( v15 )
      {
        if ( v13 != 255 )
          goto LABEL_21;
      }
      else
      {
        v16 = i;
        sub_6F86CA70(v24);
        i = v16;
        if ( v13 != 255 )
          goto LABEL_21;
      }
      v17 = *(_BYTE **)(v24 + 112);
      *v17 = 0;
      *(_DWORD *)(v24 + 112) = v17 + 1;
      v18 = *(_DWORD *)(v24 + 116) - 1;
      *(_DWORD *)(v24 + 116) = v18;
      if ( v18 )
      {
LABEL_21:
        v11 -= 8;
        if ( v11 <= 7 )
          goto LABEL_27;
        continue;
      }
      v19 = i;
      sub_6F86CA70(v24);
      i = v19;
      v11 -= 8;
      if ( v11 <= 7 )
        goto LABEL_27;
    }
  }
  v1 = *(_DWORD *)(a1 + 24);
  v2 = *(_BYTE **)v1;
  v3 = *(_DWORD *)(v1 + 4);
  qmemcpy(&v25, (const void *)(v24 + 12), 0x18u);
  v22 = *(_DWORD *)(v24 + 12);
  v23 = *(_DWORD *)(v24 + 16);
  v4 = v23 + 7;
  if ( v23 + 7 <= 7 )
  {
LABEL_14:
    v23 = 0;
    v22 = 0;
    goto LABEL_16;
  }
  for ( j = v22 | (127 << (24 - v4)); ; j <<= 8 )
  {
    *v2++ = j >> 16;
    if ( --v3 )
    {
      if ( ((j >> 16) & 0xFF) != 255 )
        goto LABEL_5;
    }
    else
    {
      v20 = *(_DWORD *)(a1 + 24);
      v6 = (*(int (__cdecl **)(int))(v20 + 12))(a1);
      v7 = v20;
      if ( !v6 )
        break;
      v2 = *(_BYTE **)v20;
      v3 = *(_DWORD *)(v20 + 4);
      if ( ((j >> 16) & 0xFF) != 255 )
      {
LABEL_5:
        v4 -= 8;
        if ( v4 <= 7 )
          goto LABEL_13;
        continue;
      }
    }
    *v2++ = 0;
    if ( --v3 )
      goto LABEL_5;
    v21 = *(_DWORD *)(a1 + 24);
    if ( !(unsigned __int8)(*(int (__cdecl **)(int))(v21 + 12))(a1) )
      break;
    v2 = *(_BYTE **)v21;
    v3 = *(_DWORD *)(v21 + 4);
    v4 -= 8;
    if ( v4 <= 7 )
    {
LABEL_13:
      v1 = *(_DWORD *)(a1 + 24);
      goto LABEL_14;
    }
  }
  v8 = *(_DWORD *)a1;
  *(_DWORD *)(v8 + 20) = 25;
  (*(void (__thiscall **)(int))v8)(v7);
  v1 = *(_DWORD *)(a1 + 24);
  v3 = 0;
LABEL_16:
  *(_DWORD *)v1 = v2;
  *(_DWORD *)(v1 + 4) = v3;
  qmemcpy((void *)(v24 + 12), &v25, 0x18u);
  result = v22;
  *(_DWORD *)(v24 + 12) = v22;
  *(_DWORD *)(v24 + 16) = v23;
  return result;
}
