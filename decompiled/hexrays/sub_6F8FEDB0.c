int __thiscall sub_6F8FEDB0(int *this, __int16 a2)
{
  int *v2; // esi@1
  int v3; // eax@1
  int v4; // ecx@1
  int v5; // ebx@1
  int result; // eax@4

  v2 = this;
  v3 = *this;
  v4 = *(_DWORD *)(*this - 12);
  v5 = v4 + 1;
  if ( (unsigned int)(v4 + 1) > *(_DWORD *)(v3 - 8) || *(_DWORD *)(v3 - 4) > 0 )
    sub_6F8FEB20(v2, v4 + 1);
  result = *v2;
  *(_WORD *)(result + 2 * *(_DWORD *)(*v2 - 12)) = a2;
  *(_DWORD *)(result - 4) = 0;
  *(_DWORD *)(result - 12) = v5;
  *(_WORD *)(result + 2 * v5) = 0;
  return result;
}
