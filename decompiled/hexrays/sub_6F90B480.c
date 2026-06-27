int __thiscall sub_6F90B480(int this, int a2, int a3)
{
  void *v3; // eax@1
  char *v4; // esi@3
  int result; // eax@3
  int v6; // ST1C_4@2

  v3 = *(void **)(this + 8);
  if ( !v3 )
  {
    v6 = this;
    v3 = sub_6F961B60(0x54u);
    this = v6;
    *((_DWORD *)v3 + 1) = 0;
    *(_DWORD *)v3 = off_6FBB0944;
    *((_DWORD *)v3 + 2) = 0;
    *((_DWORD *)v3 + 3) = 0;
    *((_BYTE *)v3 + 16) = 0;
    *(_DWORD *)((char *)v3 + 18) = 0;
    *((_DWORD *)v3 + 6) = 0;
    *((_DWORD *)v3 + 7) = 0;
    *((_DWORD *)v3 + 8) = 0;
    *((_DWORD *)v3 + 9) = 0;
    *((_DWORD *)v3 + 10) = 0;
    *((_DWORD *)v3 + 11) = 0;
    *((_DWORD *)v3 + 12) = 0;
    *((_DWORD *)v3 + 13) = 0;
    *((_DWORD *)v3 + 14) = 0;
    *((_BYTE *)v3 + 82) = 0;
    *(_DWORD *)(v6 + 8) = v3;
  }
  v4 = off_6FB49DE8;
  *((_WORD *)v3 + 9) = 46;
  *(_WORD *)(*(_DWORD *)(this + 8) + 20) = 44;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 8) = &unk_6FBA6094;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 24) = &unk_6FBA6096;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 28) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 32) = &unk_6FBA6096;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 36) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 40) = &unk_6FBA6096;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 44) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 48) = 0;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 52) = 67109634;
  *(_DWORD *)(*(_DWORD *)(this + 8) + 56) = 67109634;
  result = 0;
  do
  {
    *(_WORD *)(*(_DWORD *)(this + 8) + 2 * result + 60) = v4[result];
    ++result;
  }
  while ( result != 11 );
  return result;
}
