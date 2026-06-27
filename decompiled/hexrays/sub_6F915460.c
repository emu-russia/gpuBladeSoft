void __thiscall sub_6F915460(int this)
{
  int v1; // ebx@4
  void *v2; // eax@4

  if ( !*(_BYTE *)(this + 68) && !*(_DWORD *)(this + 60) )
  {
    v1 = this;
    v2 = sub_6F961B40(*(_DWORD *)(this + 64));
    *(_BYTE *)(v1 + 68) = 1;
    *(_DWORD *)(v1 + 60) = v2;
  }
}
