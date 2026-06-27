signed int __thiscall sub_6F9162C0(int this, signed int a2)
{
  int v2; // ebx@2
  int v3; // edx@4
  int v4; // eax@4
  int v5; // ecx@4
  signed int v6; // eax@5
  unsigned int v7; // edx@6
  _BYTE *v8; // eax@6
  int v9; // eax@10
  int v10; // edx@10
  signed int result; // eax@13
  unsigned int v12; // edx@15
  unsigned int v13; // edx@19
  int v14; // eax@21
  int v15; // ecx@21
  int v16; // [sp+20h] [bp-1Ch]@5
  int v17; // [sp+24h] [bp-18h]@5

  if ( !(*(_BYTE *)(this + 44) & 0x11) )
    return -1;
  v2 = this;
  if ( *(_BYTE *)(this + 69) )
  {
    if ( *(_BYTE *)(this + 80) )
    {
      v3 = *(_DWORD *)(this + 76);
      v4 = *(_DWORD *)(this + 72) + (*(_DWORD *)(this + 8) != *(_DWORD *)(this + 4));
      *(_DWORD *)(this + 72) = v4;
      v5 = *(_DWORD *)(this + 60);
      *(_DWORD *)(v2 + 8) = v4;
      *(_DWORD *)(v2 + 4) = v5;
      *(_DWORD *)(v2 + 12) = v3;
      *(_BYTE *)(v2 + 80) = 0;
    }
    v6 = sub_6F9150C0(v2, v2 + 56);
    sub_6F915F10((int)&v16, v2, v6, v6 >> 31, 1, *(_DWORD *)(v2 + 56));
    if ( (v16 & v17) == -1 )
      return -1;
  }
  v7 = *(_DWORD *)(v2 + 16);
  v8 = *(_BYTE **)(v2 + 20);
  if ( v7 >= (unsigned int)v8 )
  {
    v12 = *(_DWORD *)(v2 + 64);
    if ( v12 > 1 )
    {
      v14 = *(_DWORD *)(v2 + 60);
      v15 = *(_DWORD *)(v2 + 44);
      *(_DWORD *)(v2 + 4) = v14;
      *(_DWORD *)(v2 + 8) = v14;
      *(_DWORD *)(v2 + 12) = v14;
      if ( v15 & 0x10 || v15 & 1 )
      {
        *(_DWORD *)(v2 + 20) = v14;
        *(_DWORD *)(v2 + 16) = v14;
        *(_DWORD *)(v2 + 24) = v14 + v12 - 1;
      }
      else
      {
        *(_DWORD *)(v2 + 20) = 0;
        *(_DWORD *)(v2 + 16) = 0;
        *(_DWORD *)(v2 + 24) = 0;
      }
      *(_BYTE *)(v2 + 70) = 1;
      if ( a2 != -1 )
      {
        **(_BYTE **)(v2 + 20) = a2;
        result = a2;
        ++*(_DWORD *)(v2 + 20);
        return result;
      }
    }
    else
    {
      LOBYTE(v16) = a2;
      if ( a2 != -1 )
      {
        if ( sub_6F915290(v2, (int)&v16, 1) )
        {
          *(_BYTE *)(v2 + 70) = 1;
          return a2;
        }
        return -1;
      }
      *(_BYTE *)(v2 + 70) = 1;
    }
    return 0;
  }
  if ( a2 != -1 )
  {
    *v8 = a2;
    v7 = *(_DWORD *)(v2 + 16);
    v8 = (_BYTE *)(*(_DWORD *)(v2 + 20) + 1);
    *(_DWORD *)(v2 + 20) = v8;
  }
  if ( !sub_6F915290(v2, v7, (int)&v8[-v7]) )
    return -1;
  v9 = *(_DWORD *)(v2 + 60);
  v10 = *(_DWORD *)(v2 + 44);
  *(_DWORD *)(v2 + 4) = v9;
  *(_DWORD *)(v2 + 8) = v9;
  *(_DWORD *)(v2 + 12) = v9;
  if ( (v10 & 0x10 || v10 & 1) && (v13 = *(_DWORD *)(v2 + 64), v13 > 1) )
  {
    *(_DWORD *)(v2 + 20) = v9;
    *(_DWORD *)(v2 + 16) = v9;
    *(_DWORD *)(v2 + 24) = v9 + v13 - 1;
  }
  else
  {
    *(_DWORD *)(v2 + 20) = 0;
    *(_DWORD *)(v2 + 16) = 0;
    *(_DWORD *)(v2 + 24) = 0;
  }
  result = a2;
  if ( a2 == -1 )
    return 0;
  return result;
}
