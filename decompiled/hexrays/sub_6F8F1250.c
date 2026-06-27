int __stdcall sub_6F8F1250(int a1, signed int a2, int a3, int a4, int *a5, int a6, int a7, unsigned int a8, int a9, _DWORD *a10)
{
  unsigned int v10; // ebp@1
  int v11; // esi@1
  signed int v12; // eax@2
  int v13; // edi@5
  bool v14; // dl@6
  char v15; // bl@6
  bool v16; // al@8
  _BYTE *v17; // eax@15
  signed int v18; // ebx@15
  int v19; // edx@16
  int (__stdcall *v20)(unsigned __int8, int); // edx@17
  unsigned int v21; // eax@23
  bool v22; // ST2F_1@27
  int v23; // eax@27
  int v25; // eax@42
  signed int v26; // [sp+18h] [bp-34h]@1
  unsigned int v27; // [sp+1Ch] [bp-30h]@5
  int v28; // [sp+20h] [bp-2Ch]@1
  int v29; // [sp+24h] [bp-28h]@1

  v10 = 10;
  v11 = a1;
  v26 = a2;
  v29 = a3;
  v28 = sub_6F95DC10(a9 + 108);
  if ( a8 != 2 )
  {
    v12 = 1;
    if ( a8 == 4 )
      v12 = 1000;
    v10 = v12;
  }
  v27 = 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = v26 == -1;
    v15 = v14 && v11 != 0;
    if ( v14 && v11 != 0 )
    {
      if ( *(_DWORD *)(v11 + 8) >= *(_DWORD *)(v11 + 12) )
      {
        v25 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 36))(v11);
        v14 = v26 == -1;
        if ( v25 != -1 )
          v15 = 0;
        if ( v25 == -1 )
          v11 = 0;
      }
      else
      {
        v15 = 0;
      }
    }
    else
    {
      v15 = v26 == -1;
    }
    v16 = a4 == -1;
    if ( v29 && v16 )
    {
      if ( *(_DWORD *)(v29 + 8) >= *(_DWORD *)(v29 + 12) )
      {
        v22 = v14;
        v23 = (*(int (__thiscall **)(int))(*(_DWORD *)v29 + 36))(v29);
        v14 = v22;
        if ( v23 == -1 )
        {
          v15 ^= 1u;
          v29 = 0;
        }
      }
    }
    else
    {
      v15 ^= v16;
    }
    if ( v27 >= a8 || !v15 )
      break;
    if ( v11 && v14 )
    {
      v17 = *(_BYTE **)(v11 + 8);
      if ( (unsigned int)v17 >= *(_DWORD *)(v11 + 12) )
      {
        v17 = (_BYTE *)(*(int (__thiscall **)(int))(*(_DWORD *)v11 + 36))(v11);
        if ( v17 == (_BYTE *)-1 )
        {
          v18 = 255;
          LOBYTE(v17) = -1;
          v11 = 0;
        }
        else
        {
          v18 = (unsigned __int8)v17;
        }
      }
      else
      {
        v18 = *v17;
        LOBYTE(v17) = *v17;
      }
    }
    else
    {
      LOBYTE(v17) = v26;
      v18 = (unsigned __int8)v26;
    }
    v19 = *(_BYTE *)(v28 + v18 + 285);
    if ( !(_BYTE)v19 )
    {
      v20 = *(int (__stdcall **)(unsigned __int8, int))(*(_DWORD *)v28 + 32);
      if ( v20 == sub_6F8C36A0 )
      {
        if ( (_BYTE)v17 == 42 )
          goto LABEL_34;
      }
      else
      {
        LOBYTE(v17) = v20((char)v17, 42);
        if ( (_BYTE)v17 == 42 )
          goto LABEL_34;
      }
      v19 = (char)v17;
      *(_BYTE *)(v28 + v18 + 285) = (_BYTE)v17;
    }
    if ( (unsigned __int8)(v19 - 48) > 9u )
      goto LABEL_34;
    v13 = v19 + 10 * v13 - 48;
    if ( (signed int)(v13 * v10) > a7 || (signed int)(v10 + v13 * v10) <= a6 )
      goto LABEL_34;
    v21 = *(_DWORD *)(v11 + 8);
    v10 /= 0xAu;
    if ( v21 >= *(_DWORD *)(v11 + 12) )
      (*(void (__thiscall **)(int))(*(_DWORD *)v11 + 40))(v11);
    else
      *(_DWORD *)(v11 + 8) = v21 + 1;
    ++v27;
    v26 = -1;
  }
  if ( v27 == a8 )
  {
LABEL_37:
    *a5 = v13;
    return v11;
  }
LABEL_34:
  if ( a8 == 4 && v27 == 2 )
  {
    v13 -= 100;
    goto LABEL_37;
  }
  *a10 |= 4u;
  return v11;
}
