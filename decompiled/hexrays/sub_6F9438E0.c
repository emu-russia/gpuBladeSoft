int __thiscall sub_6F9438E0(int this, int a2, __int64 a3, int a4, int a5, int a6)
{
  int result; // eax@1
  int v7; // ecx@1
  int v8; // ebx@2
  unsigned int v9; // ebp@6
  int v10; // [sp+0h] [bp-2Ch]@1

  result = this;
  *(_DWORD *)this = -1;
  *(_DWORD *)(this + 4) = -1;
  *(_DWORD *)(this + 8) = 0;
  v7 = *(_DWORD *)(a2 + 32) & 8;
  v10 = a6 & *(_DWORD *)(a2 + 32);
  if ( v7 & a6 )
    v8 = *(_DWORD *)(a2 + 4);
  else
    v8 = *(_DWORD *)(a2 + 16);
  if ( (!a3 || v8) && v10 & 0x18 )
  {
    v9 = *(_DWORD *)(a2 + 20);
    if ( v9 && *(_DWORD *)(a2 + 12) < v9 )
    {
      if ( !v7 )
      {
        *(_DWORD *)(a2 + 4) = v9;
        *(_DWORD *)(a2 + 8) = v9;
      }
      *(_DWORD *)(a2 + 12) = v9;
    }
    if ( SHIDWORD(a3) >= 0
      && (*(_DWORD *)(a2 + 12) - v8) >> 32 >= ((*(_DWORD *)(a2 + 12) - v8) >> 1 < (unsigned int)a3) + HIDWORD(a3) )
    {
      if ( v7 & a6 )
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 4) + 2 * a3;
      if ( v10 & 0x10 )
        *(_DWORD *)(a2 + 20) = *(_DWORD *)(a2 + 16) + 2 * a3;
      *(_QWORD *)result = a3;
      *(_DWORD *)(result + 8) = a4;
    }
  }
  return result;
}
