signed int __thiscall sub_6F918500(int this, signed int a2)
{
  int v2; // ebx@2
  int v3; // eax@4
  int v4; // edx@4
  int v5; // ecx@4
  signed int v6; // eax@5
  unsigned int v7; // edx@6
  _WORD *v8; // eax@6
  signed int result; // eax@10
  unsigned int v10; // edx@12
  int v11; // eax@18
  int v12; // edx@18
  unsigned int v13; // edx@20
  int v14; // eax@25
  int v15; // ecx@25
  _WORD *v16; // eax@28
  int v17; // [sp+20h] [bp-1Ch]@5
  int v18; // [sp+24h] [bp-18h]@5

  if ( !(*(_BYTE *)(this + 44) & 0x11) )
    return -1;
  v2 = this;
  if ( *(_BYTE *)(this + 69) )
  {
    if ( *(_BYTE *)(this + 84) )
    {
      v3 = *(_DWORD *)(this + 76) + 2 * (*(_DWORD *)(this + 8) != *(_DWORD *)(this + 4));
      v4 = *(_DWORD *)(this + 80);
      *(_DWORD *)(this + 76) = v3;
      v5 = *(_DWORD *)(this + 60);
      *(_DWORD *)(v2 + 8) = v3;
      *(_DWORD *)(v2 + 4) = v5;
      *(_DWORD *)(v2 + 12) = v4;
      *(_BYTE *)(v2 + 84) = 0;
    }
    v6 = sub_6F917300(v2, v2 + 56);
    sub_6F918150((int)&v17, *(_DWORD *)(v2 + 56), v2, v6, v6 >> 31, 1, *(_DWORD *)(v2 + 56));
    if ( (v17 & v18) == -1 )
      return -1;
  }
  v7 = *(_DWORD *)(v2 + 16);
  v8 = *(_WORD **)(v2 + 20);
  if ( v7 < (unsigned int)v8 )
  {
    if ( (_WORD)a2 != -1 )
    {
      *v8 = a2;
      ++v8;
      *(_DWORD *)(v2 + 20) = v8;
    }
    if ( !sub_6F9174D0(v2, v7, v7, (signed int)((signed int)v8 - v7) >> 1) )
      return -1;
    v11 = *(_DWORD *)(v2 + 60);
    v12 = *(_DWORD *)(v2 + 44);
    *(_DWORD *)(v2 + 4) = v11;
    *(_DWORD *)(v2 + 8) = v11;
    *(_DWORD *)(v2 + 12) = v11;
    if ( (v12 & 0x10 || v12 & 1) && (v13 = *(_DWORD *)(v2 + 64), v13 > 1) )
    {
      *(_DWORD *)(v2 + 20) = v11;
      *(_DWORD *)(v2 + 16) = v11;
      *(_DWORD *)(v2 + 24) = v11 + 2 * v13 - 2;
    }
    else
    {
      *(_DWORD *)(v2 + 20) = 0;
      *(_DWORD *)(v2 + 16) = 0;
      *(_DWORD *)(v2 + 24) = 0;
    }
    result = a2;
    if ( (_WORD)a2 != -1 )
      return result;
    return 0;
  }
  v10 = *(_DWORD *)(v2 + 64);
  if ( v10 > 1 )
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
      *(_DWORD *)(v2 + 24) = v14 + 2 * v10 - 2;
    }
    else
    {
      *(_DWORD *)(v2 + 20) = 0;
      *(_DWORD *)(v2 + 16) = 0;
      *(_DWORD *)(v2 + 24) = 0;
    }
    *(_BYTE *)(v2 + 70) = 1;
    if ( (_WORD)a2 != -1 )
    {
      v16 = *(_WORD **)(v2 + 20);
      *v16 = a2;
      *(_DWORD *)(v2 + 20) = v16 + 1;
      return a2;
    }
    return 0;
  }
  LOWORD(v17) = a2;
  if ( (_WORD)a2 == -1 )
  {
    *(_BYTE *)(v2 + 70) = 1;
    return 0;
  }
  if ( !sub_6F9174D0(v2, v10, (int)&v17, 1) )
    return -1;
  *(_BYTE *)(v2 + 70) = 1;
  return a2;
}
