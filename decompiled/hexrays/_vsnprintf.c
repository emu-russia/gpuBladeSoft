int __cdecl vsnprintf(char *DstBuf, size_t MaxCount, const char *Format, va_list ArgList)
{
  return _vsnprintf(DstBuf, MaxCount, Format, ArgList);
}
