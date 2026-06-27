int __thiscall sub_6F956880(int this)
{
  int v1; // ebx@1
  _DWORD *v2; // eax@1
  _DWORD *v3; // ecx@3

  v1 = this + 36;
  *(_DWORD *)this = off_6FBB0EA4;
  v2 = (_DWORD *)(this + 36);
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  do
  {
    *v2 = 0;
    v2 += 2;
    *(v2 - 1) = 0;
  }
  while ( (_DWORD *)(this + 100) != v2 );
  *(_DWORD *)(this + 100) = 8;
  v3 = (_DWORD *)(this + 108);
  *(v3 - 1) = v1;
  return sub_6F938250(v3);
}
