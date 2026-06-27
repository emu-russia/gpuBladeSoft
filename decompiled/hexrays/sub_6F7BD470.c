int __cdecl sub_6F7BD470(int a1)
{
  int v1; // eax@1
  int result; // eax@2
  int v3; // [sp+1Ch] [bp-10h]@2

  v1 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(v1 + 84) )
  {
    result = sub_6F7693C0(*(_DWORD *)(v1 + 500), &v3);
    *(_DWORD *)(a1 + 160) = v3;
  }
  else
  {
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(*(_DWORD *)(v1 + 500) + 84);
    result = 0;
  }
  return result;
}
