int __thiscall sub_6F916200(int this, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // ebx@1
  bool v8; // zf@3
  int v9; // edx@3
  int v10; // ecx@3
  int v11; // eax@3
  int v13; // [sp+30h] [bp-1Ch]@4
  int v14; // [sp+34h] [bp-18h]@4
  int v15; // [sp+38h] [bp-14h]@4

  v7 = this;
  *(_DWORD *)this = -1;
  *(_DWORD *)(this + 4) = -1;
  *(_DWORD *)(this + 8) = 0;
  if ( sub_6F8BF810((void *)(a2 + 36)) )
  {
    if ( *(_BYTE *)(a2 + 80) )
    {
      v8 = *(_DWORD *)(a2 + 8) == *(_DWORD *)(a2 + 4);
      *(_BYTE *)(a2 + 80) = 0;
      v9 = *(_DWORD *)(a2 + 76);
      v10 = *(_DWORD *)(a2 + 60);
      v11 = *(_DWORD *)(a2 + 72) + !v8;
      *(_DWORD *)(a2 + 72) = v11;
      *(_DWORD *)(a2 + 4) = v10;
      *(_DWORD *)(a2 + 8) = v11;
      *(_DWORD *)(a2 + 12) = v9;
    }
    sub_6F915F10((int)&v13, a2, a3, a4, 0, a5);
    *(_DWORD *)v7 = v13;
    *(_DWORD *)(v7 + 4) = v14;
    *(_DWORD *)(v7 + 8) = v15;
  }
  return v7;
}
