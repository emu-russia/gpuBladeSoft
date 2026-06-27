int __cdecl sub_6F8654B8(int a1)
{
  int result; // eax@1
  int v2; // ebx@1

  result = a1;
  v2 = *(_DWORD *)(a1 + 400);
  if ( *(_BYTE *)(a1 + 74) )
    result = (*(int (__cdecl **)(int))(*(_DWORD *)(a1 + 440) + 8))(a1);
  ++*(_DWORD *)(v2 + 12);
  return result;
}
