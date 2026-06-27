_DWORD *__thiscall sub_6F9576C0(int this, int a2)
{
  _DWORD *result; // eax@1
  char *v3; // ebx@3
  int v4; // edx@3
  char *v5; // ebx@5
  int v6; // edx@5
  int v7; // ebx@2

  result = *(_DWORD **)(this + 8);
  if ( !result )
  {
    v7 = this;
    result = sub_6F961B60(0xA8u);
    result[1] = 0;
    *result = off_6FBB0810;
    result[2] = 0;
    result[3] = 0;
    *((_BYTE *)result + 16) = 0;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    *((_BYTE *)result + 164) = 0;
    *(_DWORD *)(v7 + 8) = result;
  }
  result[2] = &unk_6FBA61F8;
  v3 = off_6FB49DE4[0];
  v4 = 0;
  result[3] = 0;
  *((_BYTE *)result + 16) = 0;
  result[9] = 2883630;
  do
  {
    *((_WORD *)result + v4 + 20) = v3[v4];
    ++v4;
  }
  while ( v4 != 36 );
  v5 = off_6FB49DE0[0];
  v6 = 0;
  do
  {
    *((_WORD *)result + v6 + 56) = v5[v6];
    ++v6;
  }
  while ( v6 != 26 );
  result[5] = L"true";
  result[6] = 4;
  result[7] = "f";
  result[8] = 5;
  return result;
}
