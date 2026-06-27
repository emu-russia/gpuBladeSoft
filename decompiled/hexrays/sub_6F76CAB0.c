int __cdecl sub_6F76CAB0(int a1, int a2)
{
  int result; // eax@1
  int (__thiscall *v3)(int); // eax@6
  int v4; // [sp+20h] [bp+4h]@7

  result = 35;
  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 8) & 2 )
    {
      result = 6;
      if ( a2 >= 0 && a2 < *(_DWORD *)(a1 + 28) )
      {
        v3 = *(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 96) + 12) + 92);
        if ( v3 )
        {
          v4 = *(_DWORD *)(a1 + 88);
          result = v3(a2);
        }
        else
        {
          sub_6F76C670(a1, a2);
          result = 0;
        }
      }
    }
  }
  return result;
}
