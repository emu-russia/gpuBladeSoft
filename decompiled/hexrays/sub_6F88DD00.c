int __cdecl sub_6F88DD00(int a1, const char *a2, va_list a3)
{
  int result; // eax@3
  signed int v4; // esi@9
  int v5; // edx@11
  signed int v6; // edx@17

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 12) != 31153
      || *(_DWORD *)(a1 + 76)
      || !*(_DWORD *)(a1 + 24) && sub_6F88D720(a1) == -1
      || *(_DWORD *)(a1 + 72) && (v6 = *(_DWORD *)(a1 + 68), *(_DWORD *)(a1 + 72) = 0, sub_6F88D9C0(a1, v6) == -1)
      || *(_DWORD *)(a1 + 88) && sub_6F88D830(a1, 0) == -1
      || (v4 = *(_DWORD *)(a1 + 24),
          *(_BYTE *)(*(_DWORD *)(a1 + 32) + v4 - 1) = 0,
          result = _vsnprintf(*(char **)(a1 + 32), v4, a2, a3),
          v4 <= result)
      || result <= 0
      || (v5 = *(_DWORD *)(a1 + 32), *(_BYTE *)(v5 + v4 - 1)) )
    {
      result = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 88) = result;
      *(_DWORD *)(a1 + 84) = v5;
      *(_DWORD *)(a1 + 8) += result;
    }
  }
  else
  {
    result = -1;
  }
  return result;
}
