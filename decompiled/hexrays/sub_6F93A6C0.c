_BYTE *__thiscall sub_6F93A6C0(int this, _BYTE *a2, _BYTE *a3, int a4)
{
  int v4; // esi@1
  size_t v5; // ebx@3
  _BYTE *result; // eax@4
  int v7; // ebx@5
  int v8; // ebx@9
  int v9; // [sp+1Ch] [bp-10h]@3

  v4 = this;
  if ( !a2 )
  {
    if ( a3 )
      sub_6F95AFD0("basic_string::_M_construct null not valid");
  }
  v5 = a3 - a2;
  v9 = a3 - a2;
  if ( (unsigned int)(a3 - a2) > 0xF )
  {
    result = sub_6F93C230((unsigned int *)&v9, 0);
    *(_DWORD *)v4 = result;
    *(_DWORD *)(v4 + 8) = v9;
  }
  else
  {
    result = *(_BYTE **)this;
    if ( v5 == 1 )
    {
      *result = *a2;
      v7 = v9;
      result = *(_BYTE **)this;
      *(_DWORD *)(this + 4) = v9;
      result[v7] = 0;
      return result;
    }
    if ( a3 == a2 )
    {
      *(_DWORD *)(this + 4) = 0;
      *result = 0;
      return result;
    }
  }
  memcpy(result, a2, v5);
  v8 = v9;
  result = *(_BYTE **)v4;
  *(_DWORD *)(v4 + 4) = v9;
  result[v8] = 0;
  return result;
}
