void __thiscall sub_6F933600(int this)
{
  int v1; // ebx@1
  bool v2; // zf@1

  v1 = this;
  v2 = *(_BYTE *)(this + 67) == 0;
  *(_DWORD *)this = off_6FBB0934;
  if ( !v2 )
  {
    if ( *(_DWORD *)(this + 8) )
      j_j_free_1(*(void **)(this + 8));
    if ( *(_DWORD *)(v1 + 20) )
      j_j_free_1(*(void **)(v1 + 20));
    if ( *(_DWORD *)(v1 + 28) )
      j_j_free_1(*(void **)(v1 + 28));
    if ( *(_DWORD *)(v1 + 36) )
      j_j_free_1(*(void **)(v1 + 36));
  }
  nullsub_18();
}
