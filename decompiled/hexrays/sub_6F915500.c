int __thiscall sub_6F915500(int this, int a2)
{
  int v2; // ebx@1
  void *v3; // eax@1
  int v4; // eax@4
  int result; // eax@6
  int v6; // [sp+20h] [bp-1Ch]@5
  int v7; // [sp+24h] [bp-18h]@5

  v2 = this;
  v3 = *(void **)(this + 60);
  if ( !*(_BYTE *)(this + 68) && !v3 )
  {
    v3 = sub_6F961B40(*(_DWORD *)(this + 64));
    *(_BYTE *)(v2 + 68) = 1;
    *(_DWORD *)(v2 + 60) = v3;
  }
  *(_DWORD *)(v2 + 4) = v3;
  *(_DWORD *)(v2 + 8) = v3;
  *(_DWORD *)(v2 + 12) = v3;
  v4 = *(_DWORD *)(v2 + 48);
  *(_DWORD *)(v2 + 44) = a2;
  *(_WORD *)(v2 + 69) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 52) = v4;
  *(_DWORD *)(v2 + 56) = v4;
  if ( a2 & 2
    && ((*(void (__thiscall **)(int *, int, _DWORD, _DWORD, signed int, int))(*(_DWORD *)v2 + 16))(&v6, v2, 0, 0, 2, a2),
        (v6 & v7) == -1) )
  {
    sub_6F915820((_DWORD *)v2);
    result = 0;
  }
  else
  {
    result = v2;
  }
  return result;
}
