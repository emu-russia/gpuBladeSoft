int __thiscall sub_6F90A7C0(int this, int a2, int a3)
{
  int v3; // esi@1
  _DWORD *v4; // eax@1
  char *v5; // ebx@3
  int result; // eax@3
  int v7; // ST1C_4@2

  v3 = this;
  v4 = *(_DWORD **)(this + 8);
  if ( !v4 )
  {
    v7 = this;
    v4 = sub_6F961B60(0x44u);
    v3 = v7;
    *v4 = off_6FBB0924;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    *((_WORD *)v4 + 8) = 0;
    *((_BYTE *)v4 + 18) = 0;
    v4[5] = 0;
    v4[6] = 0;
    v4[7] = 0;
    v4[8] = 0;
    v4[9] = 0;
    v4[10] = 0;
    v4[11] = 0;
    v4[12] = 0;
    v4[13] = 0;
    *((_BYTE *)v4 + 67) = 0;
    *(_DWORD *)(v7 + 8) = v4;
  }
  *((_BYTE *)v4 + 17) = 46;
  v5 = off_6FB49DE8;
  *(_BYTE *)(*(_DWORD *)(v3 + 8) + 18) = 44;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 8) = &unk_6FBA6094;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 20) = &unk_6FBA6094;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 24) = 0;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 28) = &unk_6FBA6094;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 32) = 0;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 36) = &unk_6FBA6094;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 40) = 0;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 44) = 0;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 48) = 67109634;
  *(_DWORD *)(*(_DWORD *)(v3 + 8) + 52) = 67109634;
  result = 0;
  do
  {
    *(_BYTE *)(*(_DWORD *)(v3 + 8) + result + 56) = v5[result];
    ++result;
  }
  while ( result != 11 );
  return result;
}
