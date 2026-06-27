_WORD *__thiscall sub_6F8C36B0(void *this, unsigned __int16 a2, _WORD *a3, unsigned int a4)
{
  _WORD *v4; // ebx@1
  void *v5; // esi@2

  v4 = a3;
  if ( (unsigned int)a3 < a4 )
  {
    v5 = this;
    do
    {
      if ( (unsigned __int8)(*(int (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)v5 + 8))(v5, a2, *v4) )
        break;
      ++v4;
    }
    while ( a4 > (unsigned int)v4 );
  }
  return v4;
}
