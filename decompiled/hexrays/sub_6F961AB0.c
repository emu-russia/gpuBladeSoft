int __thiscall sub_6F961AB0(int *this)
{
  int *v1; // ebx@1
  int v2; // ecx@1
  int result; // eax@1
  int v4; // edx@1
  int v5; // edx@1

  v1 = this;
  v2 = *this;
  *(_DWORD *)(v2 + 44) = 0;
  *(_BYTE *)(v2 + 84) = 0;
  sub_6F917640(v2);
  result = *v1;
  *(_WORD *)(result + 69) = 0;
  v4 = *(_DWORD *)(result + 60);
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 4) = v4;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v4;
  v5 = *(_DWORD *)(result + 48);
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 52) = v5;
  *(_DWORD *)(result + 56) = v5;
  return result;
}
