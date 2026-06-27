void *__thiscall sub_6F9176A0(int this)
{
  void *result; // eax@2

  if ( !*(_BYTE *)(this + 68) )
  {
    result = *(void **)(this + 60);
    if ( !result )
      result = sub_6F9176C0(this);
  }
  return result;
}
