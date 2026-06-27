char __cdecl sub_6F86AB50(int a1, int a2)
{
  int v2; // ebx@1
  int v3; // eax@2
  int v4; // ebx@6
  int v6; // [sp+8h] [bp-20h]@5
  _BYTE *v7; // [sp+Ch] [bp-1Ch]@5

  v2 = *(_DWORD *)(a1 + 404);
  if ( *(_DWORD *)(a1 + 224) )
  {
    v3 = *(_DWORD *)(v2 + 68);
    if ( !v3 )
    {
      sub_6F86A39C(a1, *(_DWORD *)(v2 + 72));
      v3 = *(_DWORD *)(a1 + 224);
      *(_DWORD *)(v2 + 72) = ((unsigned __int8)*(_DWORD *)(v2 + 72) + 1) & 7;
    }
    *(_DWORD *)(v2 + 68) = v3 - 1;
  }
  v7 = (_BYTE *)(v2 + 204);
  v6 = *(_DWORD *)(a1 + 356);
  if ( *(_DWORD *)(a1 + 300) > 0 )
  {
    v4 = 0;
    do
      sub_6F869F7C(a1, v7, ((signed int)**(_WORD **)(a2 + 4 * v4++) >> v6) & 1);
    while ( *(_DWORD *)(a1 + 300) > v4 );
  }
  return 1;
}
