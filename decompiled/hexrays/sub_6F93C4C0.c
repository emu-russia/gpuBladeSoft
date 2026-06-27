_DWORD *__thiscall sub_6F93C4C0(int this, int a2)
{
  _DWORD *result; // eax@1

  result = (_DWORD *)a2;
  *(_DWORD *)this = this + 8;
  if ( result + 2 == (_DWORD *)*result )
  {
    *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(this + 12) = *(_DWORD *)(a2 + 12);
    *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  }
  else
  {
    *(_DWORD *)this = *(_DWORD *)a2;
    *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  }
  *(_DWORD *)(this + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)a2 = a2 + 8;
  *(_DWORD *)(a2 + 4) = 0;
  *(_BYTE *)(a2 + 8) = 0;
  return result;
}
