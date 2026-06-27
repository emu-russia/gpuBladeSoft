int __cdecl j__vsnprintf(char *DstBuf, size_t MaxCount, const char *Format, va_list ArgList)
{
  return vsnprintf(DstBuf, MaxCount, Format, ArgList);
}
