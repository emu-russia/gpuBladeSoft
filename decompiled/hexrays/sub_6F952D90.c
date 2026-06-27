int __thiscall sub_6F952D90(int this, int a2)
{
  int v2; // esi@1
  _DWORD *v3; // eax@1
  char *v4; // ebx@3
  int v5; // eax@3
  char *v6; // ebx@5
  int v7; // eax@5
  int result; // eax@7
  int v9; // ST1C_4@2

  v2 = this;
  v3 = *(_DWORD **)(this + 8);
  if ( !v3 )
  {
    v9 = this;
    v3 = sub_6F961B60(0x68u);
    v2 = v9;
    v3[1] = 0;
    *v3 = off_6FBB0800;
    v3[2] = 0;
    v3[3] = 0;
    *((_BYTE *)v3 + 16) = 0;
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = 0;
    *((_WORD *)v3 + 18) = 0;
    *((_BYTE *)v3 + 100) = 0;
    *(_DWORD *)(v9 + 8) = v3;
  }
  v3[2] = &unk_6FBA60E8;
  v4 = off_6FB49DE4[0];
  *(_DWORD *)(*(_DWORD *)(v2 + 8) + 12) = 0;
  *(_BYTE *)(*(_DWORD *)(v2 + 8) + 16) = 0;
  *(_BYTE *)(*(_DWORD *)(v2 + 8) + 36) = 46;
  *(_BYTE *)(*(_DWORD *)(v2 + 8) + 37) = 44;
  v5 = 0;
  do
  {
    *(_BYTE *)(*(_DWORD *)(v2 + 8) + v5 + 38) = v4[v5];
    ++v5;
  }
  while ( v5 != 36 );
  v6 = off_6FB49DE0[0];
  v7 = 0;
  do
  {
    *(_BYTE *)(*(_DWORD *)(v2 + 8) + v7 + 74) = v6[v7];
    ++v7;
  }
  while ( v7 != 26 );
  *(_DWORD *)(*(_DWORD *)(v2 + 8) + 20) = "true";
  *(_DWORD *)(*(_DWORD *)(v2 + 8) + 24) = 4;
  *(_DWORD *)(*(_DWORD *)(v2 + 8) + 28) = "false";
  result = *(_DWORD *)(v2 + 8);
  *(_DWORD *)(result + 32) = 5;
  return result;
}
