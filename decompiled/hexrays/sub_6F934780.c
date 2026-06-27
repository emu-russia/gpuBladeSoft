void __thiscall sub_6F934780(int this)
{
  int v1; // ebx@1
  bool v2; // zf@1

  v1 = this;
  v2 = *(_BYTE *)(this + 82) == 0;
  *(_DWORD *)this = off_6FBB0954;
  if ( !v2 )
  {
    if ( *(_DWORD *)(this + 8) )
      j_j_free_1(*(void **)(this + 8));
    if ( *(_DWORD *)(v1 + 24) )
      j_j_free_1(*(void **)(v1 + 24));
    if ( *(_DWORD *)(v1 + 32) )
      j_j_free_1(*(void **)(v1 + 32));
    if ( *(_DWORD *)(v1 + 40) )
      j_j_free_1(*(void **)(v1 + 40));
  }
  nullsub_18();
}
